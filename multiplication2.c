//Multiplication Table for a Range of Numbers
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++)
    {   
        printf("Multiplication Table for %d:\n\n", j);   

        for (int i = 1; i <=10; i++)
         
    {
        printf("%d x %d = %d\n",j,i,j*i);
        
    }
        printf("\n\n");
    }
    
    return 0;
}