#include <stdio.h>
#include <stdbool.h>

int in[21],out[21],ans[21];

int main() {
    int a,n,m,x,pos=0;
    scanf("%d%d%d%d",&a,&n,&m,&x);

    while(true) {
        in[1]=a;in[2]=pos;
        ans[1]=a;ans[2]=a;
        pos++;

        printf("%d\n", pos);

        for (int i=3;i<=n-1;i++) {
            in[i]=in[i-1]+in[i-2];
            out[i]=in[i-1];
            ans[i]=ans[i-1]+in[i]-out[i];

            printf("i=%d, in=%d, out=%d\n", i, in[i], out[i]);
        }

        if (ans[n-1]==m) {
            printf("%d", ans[x]);
            return 0;
        }
    }

    return 0;
}