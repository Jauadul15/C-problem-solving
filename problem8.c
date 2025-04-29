// Problem: Find all divisors of a number
// Input: 12    Output: 1 2 3 4 6 12    
// Input: 1     Output: 1
// Input: 0     Output: 0   
// Input: -5    Output: 1 5
// Input: -10   Output: 1 2 5 10    
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}