#include<stdio.h>
int main()
{
    // breck 
    for(int i =1; i<=10; i++ ){
        if (i==5)
        {
            break;
        }
        printf("%d\n", i);
        
    }

    printf("Now start Contineu \n");
    // Countineu 
    for(int x =1; x<=10; x++ ){
        if (x==5)
        {
            continue;
        }
        printf("%d\n", x);
        
    }
    return 0;
}