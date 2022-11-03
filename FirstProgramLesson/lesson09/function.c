#include <stdio.h>
int square(int x) { // 自定义函数 square
    return x * x;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", square(n));
    return 0;
}