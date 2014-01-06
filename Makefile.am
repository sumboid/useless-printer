AUTOMAKE_OPTIONS = subdir-objects

dist_data_DATA = m4
bin_PROGRAMS = printer
printer_SOURCES = src/main.cpp \
				  src/builder.h \
				  src/printer_func.h \
				  src/spec_func.h \
				  src/spec_thread.h 
nodist_printer_SOURCES = src/symbols.h
BUILT_SOURCES = src/symbols.h
CLEANFILES = src/symbols.h

src/symbols.h: src/font/symbols
	cd src/font && ./translator.sh > ../symbols.h