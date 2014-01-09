AUTOMAKE_OPTIONS = subdir-objects

dist_data_DATA = m4
bin_PROGRAMS = printer
printer_SOURCES = src/main.cpp \
				  src/font.cpp \
				  src/color.cpp \
				  src/builder.cpp \
				  src/printer_func.cpp \
				  src/spec_thread.cpp

nodist_printer_SOURCES = src/doom_font.h \
						 src/banner_font.h
BUILT_SOURCES = src/doom_font.h \
				src/banner_font.h

src/doom_font.h: src/font/doom_font src/font/translator.sh
	cd src/font && ./translator.sh doom_font 8 > ../doom_font.h

src/banner_font.h: src/font/banner_font src/font/translator.sh
	cd src/font && ./translator.sh banner_font 7 > ../banner_font.h