#include <stdio.h>

void podzielnosc(int x, int y){
    if(x % y == 0)
        printf("x jest podzielne przez y");
    else
        printf("x nie jest podzielne przez y");
}



int signum(int x){
    
    if(x==0)
        return 0;
    else if(x > 0)
        return 1;
    else
        return -1;
    
}


int main()
{
    printf("Hello World");

    printf("\n%d", signum(3));
    printf("\n%d", signum(0));
    printf("\n%d", signum(-12));

    podzielnosc(4,2);
    
    return 0;
}
