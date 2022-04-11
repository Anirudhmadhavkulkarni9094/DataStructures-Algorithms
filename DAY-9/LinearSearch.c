#include <stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};
int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length ; i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    return -1;
}
int main() {
    // Write C code here
    struct Array arr = {{2,3,4,5,6},10,5} ;
    printf("%d",LinearSearch(arr , 465435));
    return 0;
}
