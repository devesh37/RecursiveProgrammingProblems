#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//Given an array, check whether the array is in sorted order with recursion
void generatingBinaryString(char *a,int size)
{

    if(size==0)
    {
    printf("%s\n",a);
    return;
    }
    a[size-1]='0';
    generatingBinaryString(a,size-1);
    a[size-1]='1';
    generatingBinaryString(a,size-1);

}


int main()
{
    char *a=(char*)calloc(4,sizeof(char));
    generatingBinaryString(a,4);
}
