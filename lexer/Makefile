CC=g++
TARGET=alguage
CXX_Flags= -g -c
LIBS=-ll
INCL=-I.

all: alguage

alguage: lex.o main.o
	$(CC) lex.yy.o main.o -o $(TARGET) $(LIBS)

lex.o:lex.yy.c rules.h
	$(CC) $(INCL) $(CXX_FLAGS) lex.yy.c

main.o:main.cpp rules.h
	$(CC) $(INCL) $(CXX_FLAGS) main.cpp

clean:
	rm -rf *.o
	rm $(TARGET)

