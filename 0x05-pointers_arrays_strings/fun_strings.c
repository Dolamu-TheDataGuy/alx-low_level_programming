#include <stdio.h>

int get_str_len(char *str) {
    int offset = 0;

    while (str[offset] != '\0') {
        offset++;
    }
    return offset;
}


int main(int argc, char **argv) {
    char *str = "Hello World!"; // string literal
    char str2[] = "Hello World!";
    printf("Hello World!\n");
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("The length of str is %d\n", get_str_len(str));
    printf("The length of str2 is %d\n", get_str_len(str2));
}