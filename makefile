P=$@
OBJECTS=
CFLAGS = -g -Wall -O2 -std=gnu11
LDLIBS=
CC=gcc

$(P): $(OBJECTS)
