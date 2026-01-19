#include <stdio.h>

void findMaxMinDigits(int n, int *max, int *min) {
    int d = n % 10;
    *max = *min = d;
    n /= 10;

    while (n > 0) {
        d = n % 10;
        if (d > *max)
            *max = d;
        if (d < *min)
            *min = d;
        n /= 10;
    }
}

int main() {
    int n, max, min;
    scanf("%d", &n);
    findMaxMinDigits(n, &max, &min);
    printf("Max: %d Min: %d\n", max, min);
    return 0;
}
