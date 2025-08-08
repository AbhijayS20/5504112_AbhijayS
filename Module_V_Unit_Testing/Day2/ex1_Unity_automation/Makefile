# target name : dependencies
#	commands to generate target

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
OUT := all.out

objects:
	gcc -c $(SRC)

all: objects
	gcc $(OBJ) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f *.o *.out

