#include <stdio.h>

int main() {
    int a = 2147483647;  
    printf("Initial value of a: %d\n", a);

    a = a + 1; 

    printf("Value of a after overflow: %d\n", a);

    return 0;
}
