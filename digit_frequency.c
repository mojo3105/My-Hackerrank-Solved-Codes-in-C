#include <stdio.h>
#include <string.h>

int main()
{
    int count, i, j, a[10];
    char s[1001];
    scanf("%s", s);
    int len=strlen(s);
    for(i=48; i<58; i++)
    {
        count=0;
        for(j=0; j<len; j++)
        {
            if(s[j]==i)
            { 
                count++;
            }    
        }
        printf("%d ",count);
    }   
    return 0;
}
