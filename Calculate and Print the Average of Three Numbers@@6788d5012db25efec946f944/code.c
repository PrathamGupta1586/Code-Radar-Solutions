#include <stdio.h>

int main() {
    long int a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    float e = (a+b+c)/3;
    printf("Average: %.2f",e);
    return 0;
}