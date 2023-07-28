#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(char argc, char **argv) {
    char item[30];
    char delim;

    printf("Please enter the info\n");
    scanf("%[^, \n]%c", item, &delim);
    printf("word is %s and delimiter is %c\n", item, delim);
}