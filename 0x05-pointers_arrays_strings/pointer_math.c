#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct packet_t {
    int type;
    int age;
} packet_t;

int main (int argc, char **argv) {
    packet_t *packets = malloc(sizeof(packet_t)* 10);

    packet_t *p2 = (packets + 2); // packets + (2 *(sizeof(packet_t)) bytes

    printf("packets = %p, p2 = %p. sizeof(packet_t) = %lu\n", packets, p2, sizeof(packet_t));
}