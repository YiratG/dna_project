
TARGET=DNA

# all .cpp files in this directory are my sources
SOURCES=$(wildcard *.cpp) $(wildcard Model/*.cpp) $(wildcard View/*.cpp) $(wildcard Controller/*.cpp) $(wildcard usesLibraries/*.cpp)

OBJS=$(SOURCES:.cpp=.o)

INC_DIR=../include
CC=g++
CFLAGS= -c -pedantic -Wall -Werror  -ansi -g -I$(INC_DIR)#/-Wconversion
CXXFLAGS=$(CFLAGS)
LDFLAGS= -g

.PHONY: clean run gdb

$(TARGET): $(OBJS) .depends
	$(CC) -o $(TARGET) $(OBJS) $(LDFLAGS)
include .depends

.depends:
	$(CC) -MM -I$(INC_DIR) $(SOURCES) > .depends

clean:
	rm -f $(OBJS) $(TARGET) .depends

run: $(TARGET)
	./$(TARGET)

# Do not forget to add '-g' to CFLAGS
gdb: $(TARGET)
	gdb -q ./$(TARGET)
	
