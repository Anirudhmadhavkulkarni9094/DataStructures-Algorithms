#include <stdio.h>
struct Array{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    printf("ELEMENTS ARE:\n");
    for( i = 0; i<arr.length ; i++){
        printf("%d\t",arr.A[i]);
    }
}
int main() {
    // Write C code here
    int i,n;
    struct Array arr = {{2,3,4,5,6},20,5} ;   //{2,3,4,5,6} = A[20] , 20 = size , 5 = length
    Display(arr);
    return 0;
}
