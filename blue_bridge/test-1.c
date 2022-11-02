#include <stdio.h>
#include <math.h>

int main() {
    int start = 6;
    long long dur = 20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20*20;
    int counter = start;

    for (long long i = 0; i < dur; i++)
    {
        if (counter == 7) {
            counter = 1;
        } else {
            counter++;
        }

    }

    printf("%d", counter);

    return 0;
}