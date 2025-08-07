#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int a = 10;
    char b;

    //int *ptr; // ptr is a pointer to an integer

    // a = 10; // this goes to data bus
    //  ptr = 10; // this goes to address bus //we get a warning..
   //ptr = &a;
    // ptr = (int *)10;  we got segmentaion error so we use mem alloc to get a free address from memory
    // ptr = malloc(4); // this goes to address bus -> referencing
    // *ptr = 10;       //-> Dereferencing

    printf("%d\n", *ptr);
    printf("%d\n", a);

    a = 20;
    printf("%d\n", *ptr);

    *ptr = 200;
    printf("%d\n", a);

    *ptr = 65;
    b = *ptr;
    printf("%c\n", b);

    // Different pointer types pointing to same memory
    long num = 0x542345525645232;
    long *ptr1 = &num;
    int *ptr2 = (int *)&num;
    char *ptr3 = (char *)&num;

    printf("Address of num: %p\n", (void *)ptr1);
    printf("Value *ptr1 (as long): 0x%lx\n", *ptr1);
    printf("Value *ptr2 (as int): 0x%x\n", *ptr2);
    printf("Value *ptr3 (as char): 0x%hhx\n", *ptr3);     */

    // short num = 0x542345525645232;
    long num = 0x542345525645232;

    // char *ptr = &num;
    short *ptr = &num;

    printf("%p\n", ptr);   // Some address
    printf("%hx\n", *ptr); // going to print 32

    // pointer aritemetic // ptr = ptr + 1 -> ptr = ptr + 1 * sizeof(*p)
    // pointer aritemetic // ptr = ptr + 1 -> ptr = ptr + 1 * sizeof(datatype)

    ptr++; // ptr = ptr + 1

    printf("%p\n", ptr);   // Some address
    printf("%hx\n", *ptr); // going to print 32

    ptr++;

    printf("%p\n", ptr);   // Some address
    printf("%hx\n", *ptr); // going to print 32

    return 0;
}