P=$@
OBJECTS=
CFLAGS= -g -Wall -Wextra -pedantic -O2 -std=gnu11 -march=native
LDLIBS=
CC=gcc

$(P): $(OBJECTS)
