CC= g++
CPP_FLAGS = -g -c -Wall
TARGET=parser
INCL= -I.

all:parser

parser: main.o Lexer.o Source.o
	$(CC) main.o Lexer.o -o $(TARGET)


main.o: main.cpp
	$(CC) $(CPP_FLAGS) $(INCL) main.cpp 

Lexer.o:Lexer.h Lexer.cpp
	$(CC) $(CPP_FLAGS) $(INCL) Lexer.cpp

Source.o:Source.h Source.cpp
	$(CC) $(CPP_FLAGS) $(INCL) Source.cpp

clean:
	rm -rf *.o
	rm $(TARGET)
