#!/usr/bin/env bash

height=8

function translateNewLine {
	newLine='\\n\n\\n\n\\n\n\\n\n\\n\n\\n\n\\n\n\\n'
	echo -e $newLine | translateSymbol "eol"
}

function translateSpace {
	cat symbols | getSymbol 1 | translateSymbol "space"
}

function translateAlpha {
	symbol=( {a..z} )
	offset=12

	for i in $(seq 0 25); do
		cat symbols | getSymbol $(($i + $offset)) | translateSymbol ${symbol[i]} | escape
	done
}

function translateDigits {
	number[0]="zero"
	number[1]="one"
	number[2]="two"
	number[3]="three"
	number[4]="four"
	number[5]="five"
	number[6]="six"
	number[7]="seven"
	number[8]="eight"
	number[9]="nine"

	offset=2

	for i in $(seq 0 9); do
		cat symbols | getSymbol $(($i + $offset)) | translateSymbol ${number[i]} | escape
	done
}

function translateHeight() {
	echo "static const size_t height = $height;"
}

function getSymbol() { 
	a=$(($1 * $height - 7)); 
	b=$(($1 * $height)); 
	cat symbols | sed "$a,$b!d"
} 

function translateSymbol() {
	IFS=
	echo "static const char* $1[] = {"
	while read -r line; do echo "\"$line\","; done
	echo "};"
}

function escape() {
	IFS=
	while read -r line; do echo "$line" | sed 's:\\:\\\\:g'; done
}

function translateAll() {
	echo -e '#pragma once\nnamespace symbols {'
	translateDigits
	translateAlpha
	translateSpace
	translateNewLine
	translateHeight
	echo "};"
}

translateAll