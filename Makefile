CFLAGS=-Wall -g

SRC_DIR = src

all: build run
	
build:
	cc -std=c99 $(SRC_DIR)/*.c ${SRC_DIR}/*.h

clean:
	rm -f ./*.out

run:
	./a.out

