SRC_DIR = src

all:
	cc $(SRC_DIR)/*.c ${SRC_DIR}/*.h

clean:
	rm -f ./*.out

run:
	./a.out

