#include<stdio.h>
#include<conio.h>

void towerOfHanoi(int n,char from,char to,char temp)
{
    if(n==1)
    {
        printf("Moving disk no.:%d %c to %c\n",n,from,to);
        return;
    }
    towerOfHanoi(n-1,from,temp,to); //moving disk 'from' to 'temp' using 'to'
    printf("Moving disk no.:%d %c to %c\n",n,from,to);
    towerOfHanoi(n-1,temp,to,from); //moving disk 'to' to 'from' using 'temp'

}


int main()
{
    towerOfHanoi(5,'a','c','b');
    return(1);
}
