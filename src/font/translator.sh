#!/usr/bin/env bash

height=
fontName=

function pragma {
	echo "#pragma $1"
}

function include {
	echo "#include $1"
}

function class {
	echo -e "class $1 {\npublic:\n$2\n};"
}

function translateNewLine {
	local newLine='\\\\n'

	for i in `seq 1 $(($height - 1))`; do
		newLine=$newLine'\n\\\\n'
	done

	echo -e $newLine | translateSymbol '\\n'
}

function translateSpecSymbols {
	getSymbol 1  | escape | translateSymbol " "
	getSymbol 2  | escape | translateSymbol "!"
	getSymbol 3  | escape | translateSymbol "?"
	getSymbol 4  | escape | translateSymbol "@"
	getSymbol 5  | escape | translateSymbol "#"
	getSymbol 6  | escape | translateSymbol "$"
	getSymbol 7  | escape | translateSymbol "%"
	getSymbol 8  | escape | translateSymbol "^"
	getSymbol 9  | escape | translateSymbol "&"
	getSymbol 10 | escape | translateSymbol "*"
	getSymbol 11 | escape | translateSymbol "("
	getSymbol 12 | escape | translateSymbol ")"
	getSymbol 13 | escape | translateSymbol "-"
	getSymbol 14 | escape | translateSymbol "_"
    getSymbol 15 | escape | translateSymbol "+"
	getSymbol 16 | escape | translateSymbol "="
	getSymbol 17 | escape | translateSymbol '\\\\'
	getSymbol 18 | escape | translateSymbol "|"
	getSymbol 19 | escape | translateSymbol "/"
	getSymbol 20 | escape | translateSymbol "."
	getSymbol 21 | escape | translateSymbol ","
}

function translateAlpha {
	local symbol=( {a..z} )
	local offset=32

	for i in `seq 0 25`; do
		getSymbol $(($i + $offset)) | escape | translateSymbol ${symbol[i]}
	done
}

function translateDigits {
	local offset=22

	for i in `seq 0 9`; do
		getSymbol $(($i + $offset)) | escape | translateSymbol $i
	done
}

function translateHeight() {
	echo "font_t::set_height($height);"
}

function getSymbol() { 
	local a=$(($1 * $height - ($height - 1))); 
	local b=$(($1 * $height)); 
	cat $fontName | sed "$a,$b!d"
} 

function translateSymbol() {
	IFS=
	echo "{"
	echo "const char* symbol[] = {"
         while read -r line; do echo "\"$line\","; done
    echo "};"
	echo "font_t::add('$1', std::vector<std::string>(symbol, symbol + $height));"
	echo "}"
}

function escape() {
	IFS=
	while read -r line; do echo "$line" | sed 's:\\:\\\\\\\\:g'; done
}

function translateAll() {
	constructorBody="$(translateDigits)\n"
	constructorBody="$constructorBody$(translateAlpha)\n"
	constructorBody="$constructorBody$(translateSpecSymbols)\n"
	constructorBody="$constructorBody$(translateNewLine)\n"
	constructorBody="$constructorBody$(translateHeight)\n"

	constructor="$fontName() {\n$constructorBody}"

	#echo -e $constructor
	# Print result class
	pragma once
	include '<string>'
	include '<vector>'
	include '"font.h"'
	class "$fontName : public font_t" "$constructor"
}

fontName=$1
height=$2
translateAll
