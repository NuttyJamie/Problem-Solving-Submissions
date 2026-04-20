#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d %s", a, ((a & 1)? "is odd":"is even"));
    return 0;
}
