#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int i,j;
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
