.PHONY: default help object executable all clean
CC = gcc
CP = g++

LD = $(CC)

SOURCE_C = $(wildcard *.c)
SOURCE_CPP = $(wildcard *.cpp)
OBJECTS_C = $(patsubst %.c, %_c.o, $(SOURCE_C))
OBJECTS_CPP = $(patsubst %.cpp, %_cpp.o, $(SOURCE_CPP))

EXECUTABLE = cpp-main.e

default: help

help:
	@echo "\
Options:\n\n\
  make objects:       compiler makes objects for every *.c and *.f90\n\
  make executable:    compiler makes executable\n\
  make all:           build all previous\n\
  make clean:         delete output files\n\
  make help:          display this help"

objects: $(OBJECTS_C) $(OBJECTS_CPP)


executable: $(EXECUTABLE)

all: objects executable

%_c.o: %.c
	$(CC) -c $^ -o $@

%_cpp.o: %.cpp
	$(CP) -c $^ -o $@

%.e: $(OBJECTS_C) $(OBJECTS_CPP)
	$(LD) $^ -o $@

clean:
	rm -rfv $(OBJECTS_C) $(EXECUTABLE) $(OBJECTS_CPP) 
