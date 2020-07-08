#include<stdio.h>
#include<conio.h>
//Given an array, check whether the array is in sorted order with recursion
int isArraySorted(int size,int *a)
{
    if(size==1)
    {
    return(1);
    }
    return(a[size-2]>a[size-1]?0:isArraySorted(size-1,a));

}


int main()
{
    int a[6]={4,5,7,8,10,9},b[5]={1,2,3,5,6};
    if(isArraySorted(6,a))
        printf("Array 'a' is sorted\n");
    else
        printf("Array 'a' is not sorted\n");
    if(isArraySorted(5,b))
        printf("Array 'b' is sorted\n");
    else
        printf("Array 'b' is not sorted\n");
    return(1);
}
