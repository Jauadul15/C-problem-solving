// Problem 5: Print the following pattern
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include<stdio.h>

int main(){
    int n=6;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <=n-i; j++)
        {
            printf("");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}