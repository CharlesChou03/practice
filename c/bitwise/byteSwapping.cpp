#include <stdio.h>
#include <stdlib.h>

int main() {
    short int a = 0x1234;
    short int b = 0x3412;
    a = ((a & 0xff00) >> 8) + ((a & 0x00ff) << 8);
    if (a == b) {
        printf("byte swap success!");
    }
}