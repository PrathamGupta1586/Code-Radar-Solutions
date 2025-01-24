#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char result[100];
    // if (a<=b)
    //     printf("True");
    // else if (a>b)
    //     printf("False");
    result = a<=b ? "True":"False";
    printf("%s",result);
    return 0;
}