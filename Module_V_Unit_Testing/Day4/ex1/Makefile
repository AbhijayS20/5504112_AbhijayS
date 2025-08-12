object.o : test.c unity.c def.c
	gcc -c $< -o $@

all: test.o def.o unity.o
	gcc $^ -o $@

run: all
	./all
clean:
	rm -rf *.o all