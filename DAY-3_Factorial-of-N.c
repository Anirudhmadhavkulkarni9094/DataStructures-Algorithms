//Factorial of N using Recursion

#include <stdio.h>
int fact(int n){
    int s=1;
    int i;
    if(n==0){
        return 1;
    }
    else{
    return fact(n-1)*n; 
        }
}

int main() {
    // Write C code here
    int r;
    r=fact(5);
    printf("%d",r);
    return 0;
}

//Factorial of N using FOR loop

#include <stdio.h>
int fact(int n){
    int s=1;
    int i;
    if(n==0){
        return 1;
    }
    else{
    for(i=1;i<=n;i++){
        s=s*i;
        }
    return s;
    }
}

int main() {
    // Write C code here
    int r;
    r=fact(0);
    printf("%d",r);
    return 0;
}
