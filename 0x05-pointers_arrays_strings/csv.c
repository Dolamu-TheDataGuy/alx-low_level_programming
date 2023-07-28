#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 4096

int main(int argc, char **argv) {

    char item[BUFSIZE];
    char delim;
    int  item_count = 0;

    // [^,\n] reads all the character as a string and put into the item array
    // until it encounters the "," or "/n" character, then the delimiter is stored in the address of the delim variable.
    while (scanf("%[^,\n]%c", item, &delim) != EOF) {
        printf("%s, ", item);
        item_count++;
        if (delim == '\n') {
            printf("(%d items)\n", item_count);
            item_count = 0;
        }
    }
}
 