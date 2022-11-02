#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    double sum;

    for (int n = 1; n <= 1000000; n++) {
        sum += 1.0/n;

        if (sum > k) {
            printf("%d", n);
            return 0;
        }
    }
}