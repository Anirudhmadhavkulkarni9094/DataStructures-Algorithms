//Sum of N natural numbers using recursion
#include <stdio.h>
int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main() {
    // Write C code here
    int r;
    r=sum(5);
    printf("%d",r);
    return 0;
}
