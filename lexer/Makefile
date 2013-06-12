CC=g++
TARGET=alguage
CXX_FLAGS= -c -g
LIBS=-ll
INCL=-I.

all:lex.yy.o main.o
	$(CC) lex.yy.o main.o -o $(TARGET) $(LIBS)

lex.yy.o:rules.h lex.yy.c
	$(CC)  $(CXX_FLAGS) $(INCL) lex.yy.c

main.o:rules.h main.cpp
	$(CC) $(CXX_FLAGS) $(INCL) main.cpp

clean:
	rm -rf *.o
	rm $(TARGET)

