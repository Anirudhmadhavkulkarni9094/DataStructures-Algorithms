#include<stdio.h>
struct Array
{
 int A[10];
 int size; 
 int length;
};
void Display(struct Array arr)
 {
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
 }
int BinarySearch(struct Array arr,int key)
{
 int l,mid,h;
 l=0;
 h=arr.length-1;
   while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
  return -1;
}
int RBinarySearch(int a[],int l,int h, int key){
    int mid;
    if(l<=h){
    mid=(l+h)/2;
    if(key == a[mid])
        return mid;
    else if(key<a[mid])
        return RBinarySearch (a,l, mid-1, key);
    else 
        return RBinarySearch (a, mid+1,h, key);
    }
    return -1;
}
int main()
{
 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
 printf("element is present  at index :\n\t\t%d\t\t",RBinarySearch(arr1.A,0,arr1.length-1,2));
 Display(arr1);
 return 0;
}
