#include <stdio.h>
#include<stdlib.h>
struct Array{                                  //strucutre of array with threre parameters
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){               // display function used to print all the element in order to reduce the size of code since we will be using printf statement with for loop many times
    int i;
    printf("ELEMENTS ARE:\n");
    for( i = 0; i<arr.length ; i++){
        printf("%d\t",arr.A[i]);
    }
}
int Delete(struct Array *arr , int index)   //main logic for deleting an element from an array
{
    int x=0;
    if(index>=0 && index< arr->length)
    {
        x=arr->A[index];
        for(int i=index ; i< arr->length-1 ; i++)
            arr->A[i]=arr->A[i+1];
        arr->length -- ;
        return x;
    }
    return x;
}

int main() {                                //driving code for generating input and output    // Write C code here
    int i,n;
    struct Array arr = {{2,3,4,5,6},10,5} ;
    printf("%d\n",Delete(&arr , 4));
    Display(arr);


    return 0;
}
