#include <stdio.h>

int main() {
    int distance;
    long long order_value;
  
    if (scanf("%d %lld", &distance, &order_value) != 2) {
        printf("INVALID\n");
        return 0;
    }
    if (distance <= 0 || order_value < 0) {
        printf("INVALID\n");
    }
    else if (order_value >= 500000 && distance <= 15) {
        printf("0\n");
    }
    else if (distance <= 5) {
        printf("15000\n");
    }
    else if (distance <= 15) {
        printf("25000\n");
    }
    else {
        printf("40000\n");
    }

    return 0;
}