CC:=gcc
LD:=gcc

SRCS:=$(wildcard src/*.c)
OBJS:=$(patsubst obj/%.c, src/%.c, $(SRCS))

CFLAGS:=-g -O2 -Wall -Wextra -std=c17
LDFLAGS:=-lSDL2main -lSDL2 -lSDL2_gfx -lm

TARGET:=bin/gravity

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

obj/$(shell basename %).o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm bin/*
	rm obj/*
	
