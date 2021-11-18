#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i,sum=0;
    scanf("%d\n",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum+= arr[i];
    }
    printf("%i",sum);
    free(arr);    
    return 0;
}
