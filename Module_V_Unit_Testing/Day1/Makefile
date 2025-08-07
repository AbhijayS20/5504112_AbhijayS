# target name : dependencies
#	commands to generate target

# Compile all .c files to .o files
objects:
	gcc -c main.c sum.c difference.c product.c division.c square.c

# Link all .o files to create executable
all: objects
	gcc main.o sum.o difference.o product.o division.o square.o -o all.out

# Run the executable
run: all
	./all.out

# Clean up object files and executable
clean:
	del /Q *.o all.out 2>nul || exit 0
