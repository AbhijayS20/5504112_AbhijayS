# target name : dependencies
#	commands to generate target


SRCS = main.c sum.c difference.c product.c division.c square.c
OBJS = main.o sum.o difference.o product.o division.o square.o 

object.o: $(SRCS)
		gcc $^ -c

all: $(OBJS)
	gcc $^ -o $@

run: all
	./all

clean:
	rm -f *.o *.out all

# Special Variables:
# 1. $^: Consider all the file present in the dependencies, seperated space
# 2. $<: Consider only 1st file present in the dependency.
# 3. $@: Representing the target / evaluates to all 