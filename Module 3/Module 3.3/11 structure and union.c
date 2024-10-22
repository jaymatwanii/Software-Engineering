#include <stdio.h>

struct StructExample {
    int a;
    char b;
    float c;
};

union UnionExample {
    int a;
    char b;
    float c;
};

int main() {
    struct StructExample s;
    union UnionExample u;

    printf("Structure size: %lu bytes\n", sizeof(s));  // Sum of all members
    printf("Union size: %lu bytes\n", sizeof(u));      // Largest member's size

    return 0;
}

