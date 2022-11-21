#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int source, int destination, int inter){ 

   
    if(n==1)
    {
        printf("Move disc from %d to %d\n",source,destination);
    }
    else
    {
        hanoi(n-1,source,inter,destination);
        printf("Move disc from %d to %d\n",source, destination);
        hanoi(n-1, inter,destination,source);
    }
}

int main(void)
{
    // Input number for h
    int h;
    
    printf("Please enter an integer: "); 
    scanf("%d",&h);
    printf("Solution for %d discs\n",h);
    hanoi(h,1,3,2);
    return 0;
}
