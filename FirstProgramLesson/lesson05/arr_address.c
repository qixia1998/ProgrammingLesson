#include <stdio.h>

int main() {
    int arr[100];
    printf("&arr[0] = %p\n", &arr[0]); // 输出 arr[0] 的地址
    printf("&arr[1] = %p\n", &arr[1]); // 输出 arr[1] 的地址
    printf("    arr = %p\n", arr);     // 输出 arr 的信息
    return 0;
}