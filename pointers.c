#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void update(int *a,int *b) {
    int pa, pb;
    pa= *a + *b;
    pb= *a - *b;
    *a= pa;
    *b= abs(pb); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
