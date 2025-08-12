# target name : dependencies
#	commands to generate target

# Compile all .c files to .o files
objects: main.c sum.c difference.c product.c division.c square.c
		gcc $^ -c

# Link all .o files to create executable
all: main.o sum.o difference.o product.o division.o square.o 
	gcc $^ -o $@

# Run the executable
run: all
	./all.out

# Clean up object files and executable
clean:
	del /Q *.o all.out 2>nul || exit 0

# Special Variables:
# 1. $^: Consider all the file present in the dependencies, seperated space
# 2. $<: Consider only 1st file present in the dependency.
# 3. $@: Representing the target / evaluates to all 