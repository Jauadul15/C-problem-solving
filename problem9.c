// Problem 9: Write a C program to print all even numbers from 1 to n. If no even number is found, print -1.
// Input: 10    Output: 2 4 6 8 10  
// Input: 1     Output: -1  
// Input: 0     Output: -1  
// Input: -5    Output: -1

#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            count=1;
        }        
    }
    if (count==0)
        {
            printf("-1");
        }
    return 0;
}