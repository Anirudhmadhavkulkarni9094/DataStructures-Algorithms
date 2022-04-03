#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
}

int main()
{
    int r;
    r=fun(6);
    printf("%d",r);
    return 0;
}
