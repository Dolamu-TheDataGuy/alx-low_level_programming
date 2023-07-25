#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


int main(int argc, char **argv) {
    int x = 7;
    printf("Hello World\n");

    //scanf
    printf("enter new value for x\n");
    scanf("%d", &x);
    printf("x = %d\n", x);

    printf("What is your name?\n");
    char name[30];
    scanf("%19s", name); // name is a pointer to the first character in the text.
    printf("Your name is %s\n", name);
}





 