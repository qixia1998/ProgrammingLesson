#include <stdio.h>

int main() {
    double num;
    int n;
    scanf("%lf%d", &num, &n);
    switch (n) {
        case 1: printf("%.1lf\n", num); break;
        case 2: printf("%.2lf\n", num); break;
        case 3: printf("%.3lf\n", num); break;
        case 4: printf("%.4lf\n", num); break;
        case 5: printf("%.5lf\n", num); break;
    }
    return 0;
}