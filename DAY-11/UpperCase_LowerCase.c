#include <stdio.h>

int main() {
    // Write C code here
    char A[] = "Anirudh kulkarni";
    int i;
    for(i=0;A[i]!='\0';i++){                    //looping until the last character is reached
        if(A[i]>=65 && A[i]<=90){
            A[i]+=32;                           //32 is difference between lower case and upper case
        }
        else if(A[i]>='a' && A[i]<=122){
            
            A[i] -= 32;
        }
        
    }
    printf("%s" , A);
}
