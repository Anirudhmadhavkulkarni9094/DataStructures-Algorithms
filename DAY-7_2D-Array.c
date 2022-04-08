#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}}; //CREATED IN STACK
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",A[i][j]);
        }
    }
    int*B[3];                                   //CREATED HALF IN STACK MEMORY HALF IN HEAP
    B[0]= (int *)malloc(4*sizeof(int));
    B[1]= (int *)malloc(4*sizeof(int));
    B[2]= (int *)malloc(4*sizeof(int));
    
    int **C;                                    //CREATED IN HEAP
    C=(int **)malloc(3*sizeof(int*));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));
    return 0;
}
