#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int i, ar[100];
  ar[1]=a;
  ar[2]=b;
  ar[3]=c;
  for(i=4;i<=n;i++)
  {
      ar[i]=ar[i-1]+ar[i-2]+ar[i-3];
  }
  return ar[n];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
