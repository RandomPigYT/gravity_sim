CC:=gcc
LD:=gcc

SRCS:=$(wildcard src/*.c)
OBJS:=$(patsubst src/%.c, obj/%.o, $(SRCS))

CFLAGS:=-g -O2 -Wall -Wextra -std=c17
LDFLAGS:=-lSDL2main -lSDL2 -lSDL2_gfx -lm

TARGET:=bin/gravity

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm bin/*
	rm obj/*
	
run:
	./$(TARGET)

echo:
	echo $(OBJS)
