CC= g++
CPP_FLAGS = -g -c -Wall
TARGET=parser
LIBS=

all:parser

parser: main.o
	$(CC) main.o -o $(TARGET) $(LIBS)


main.o: main.cpp
	$(CC) $(CPP_FLAGS) main.cpp


clean:
	rm -rf *.o
	rm $(TARGET)
