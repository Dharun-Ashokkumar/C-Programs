#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}  
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    return 0;
}