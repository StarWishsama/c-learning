#include <stdio.h>

int xpos[100010];

int main() {
    int l,m,counter;
    scanf("%d%d",&l,&m);

    for (int i = 0; i < m; i++) {
        int from,to;
        scanf("%d%d",&from,&to);
    
        for (int j = from; j <= to; j++) {
            xpos[j] = 1;
        }
    }

    for (int i = 0; i <= l; i++)
    {
        if (xpos[i] == 1) {
            counter++;
        }
    }
    
    printf("%d", l-counter+1);
    
    return 0;
}