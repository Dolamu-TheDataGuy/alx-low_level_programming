#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 4096

int main(int argc, char **argv) {

    char item[BUFSIZE];

    while (scanf("%s", item) != EOF) {
        printf("item: %s\n", item);
    }
}
 