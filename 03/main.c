#include <stdio.h>

#include "add.h"

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int c = add(a, b);
    printf("%d\n", c);

    return 0;
}
