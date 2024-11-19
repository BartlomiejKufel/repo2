#include <stdio.h>

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
    
    return 0;
}
