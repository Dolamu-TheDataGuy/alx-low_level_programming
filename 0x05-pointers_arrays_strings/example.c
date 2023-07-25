#include <stdio.h>
#include <stdlib.h>

void sayhello() {
    printf("Hello\n");
}

int main() {
    sayhello();

    int x = 0xFEEDBEEF;
    int y;
    int *p = (int *)malloc(sizeof(int)); // p can host the address of any type of variable.
    int *ip = &x;
    // p = ip;

    *ip = 0x00C0FFEE;
    *(int *)p =  0XDEADBEEF; // You cant dereference void pointers, we have to type cast it to make it work
    printf("sizeof(void*) = %zu\n", sizeof(p)); // size of a void pointer is also 8
    printf("sizeof(int*) = %zu\n", sizeof(ip));

    printf("p -> %p (%x)\n", p, *(int *)p); //same address
    printf("ip -> %p (%x)\n", ip, *ip); // same address
    free(p);
}