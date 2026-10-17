#include<stdio.h>
int main(){
    int i=1;

    while (i<=5)
    {
        printf("%d\n", i);
        ++i;
    }

    int num, sum= 0;

    
    do{
        printf("Enter your number:");
        scanf("%d", &num);
        sum= sum + num;
    }
    while (num !=0);
    {
        printf("Sum=%d", sum);
    }
    

    return 0;
    
}