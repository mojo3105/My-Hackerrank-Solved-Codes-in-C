#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,sum=0,a[5];
    scanf("%d\n", &n);
    for(i=0;i<5;i++)
    {
        a[i]=n%10;
        sum=sum+a[i];
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
