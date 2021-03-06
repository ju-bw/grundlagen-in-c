# ju -- https://bw1.eu -- 6-Jan-19  -- Makefile
# Win10
# gcc -v // Version 7.1.0
#
TARGETS=\
	array.exe \
	datentypen.exe \
	dummy.exe \
	hallo-in-c.exe \
	halloC-v02.exe \
	lokal-global-var.exe \
	string.exe \
	struct-led.exe \
	test-bibliothek.exe \
	zeiger.exe \
	class-led.exe \
	class-person-v02.exe \
	class-person.exe \
	hallo-in-c++.exe \
	halloC++-v02.exe \
	struct-person.exe \
# 
CC:=gcc
CLIBS=-lz funktionen.c funktionen.h -lm
CFLAGS=-Wall -Wextra -std=c11 -lpthread -pthread -O0 -Wno-missing-field-initializers -g
CXX:=g++
CXXLIBS=-lz funktionen.c funktionen.h -lm
CXXFLAGS=-Wall -Wextra -std=c++11 -lpthread -pthread -O0 -Wno-missing-field-initializers -g
CXX14FLAGS=-Wall -Wextra -std=c++1y -lpthread -pthread -O0 -Wno-missing-field-initializers -g
CXX17FLAGS=-Wall -Wextra -std=c++17 -lpthread -pthread -O0 -Wno-missing-field-initializers -g

all: $(TARGETS)

%.exe: %.cpp
	$(CXX) $(CXX17FLAGS) -o $@ $< $(CXXLIBS)

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $< $(CLIBS)

clean:
	rm *.exe
