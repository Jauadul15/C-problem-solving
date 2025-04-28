/*
multiplication example
10 * 1 = 10
10 * 2 = 20    

table to print multiplication table of any number


*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {   
    
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}