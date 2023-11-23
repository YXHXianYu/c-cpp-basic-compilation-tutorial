#include <stdio.h>

void add1ToGlobalVar();
void add2ToGlobalVar();
int getGlobalVar();

int main() {
    add1ToGlobalVar(); // globalVar += 1
    add2ToGlobalVar(); // globalVar += 2
    int x = getGlobalVar(); // x = globalVar

    // the initial value of globalVar is -3
    // so, the result is 0

    printf("%d\n", x); // 0

    return 0;
}