/*given below code is more effective way of finding power
of a number by reducing the number of multiplication*/
#include <stdio.h>
//function which return the power of certain number m to the power n
int power1(int m,int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return power1(m*m,n/2);
    return m*power1(m*m,(n-1)/2);  //this statement reduce the power by half 2^8 = (2^2)^4
}
//driver code
int main() {
    // Write C code here
    int r=power1(3,2);
    printf("%d",r);
    return 0;
}
