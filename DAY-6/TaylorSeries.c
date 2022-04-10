#include <stdio.h>
//function to print 
double e(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    r=e(x,n-1);         //main logic
    p=p*x;              // this line is used to add the power in the numerator
    f=f*n;              // this line is used to add the factorial in the denominator
    return r+p/f; 
}
//driver code
int main() {
    // Write C code here
    printf("%1f \n",e(3,20));
    
    return 0;
}
