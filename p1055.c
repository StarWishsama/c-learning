#include <stdio.h>

char cache[13];

int main() {
    int sum=0;
    int counter=1;
    char identity = '\0';
    for (int i = 0; i < 13; i++)
    {
        char cur;
        scanf("%c", &cur);
        cache[i] = cur;

        if (cur == '-') continue;
        if (i == 12) {
            identity = cur;

            int check = sum % 11;

            if (check == 10 && identity == 'X' || check == identity - '0') {
                printf("Right");
            } else {
                if (check == 10) {
                    cache[12] = 'X';
                } else {
                    cache[12] = check + '0';
                }
                for (int j = 0; j < 13; j++) {
                    printf("%c", cache[j]);
                }
            }

            break;
        }

        int num = cur - '0';
        sum += num*counter;
        counter++;
    }
    
    return 0;
}