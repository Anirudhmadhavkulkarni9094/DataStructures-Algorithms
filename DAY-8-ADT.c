//CREATING ARRAY IN HEAP
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;                               //STRUCTURE INITALISATION WITH 3 PARAMETER
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
    struct Array arr;
    printf("Enter size of array\n");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));  //creating array in heap
    arr.length = 0;

    printf("Enter Number of numbers\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    Display(arr);                              //function call


    return 0;
}
