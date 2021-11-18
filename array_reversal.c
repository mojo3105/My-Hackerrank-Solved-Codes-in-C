#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *arr2, j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    arr2 = (int*) malloc(num * sizeof(int));
    j=num-1;
    for(i=0;i<num;i++)
    {
        arr2[i] = arr[j];
        j--;
    }
    for(i = 0; i < num; i++)
    {
        printf("%d ", *(arr2 + i));
    }
    free(arr);
    free(arr2);    
    return 0;
}
