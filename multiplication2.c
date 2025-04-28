/*Multiplication Table for a Range of Numbers
 This program generates multiplication tables for odd numbers only from 1 to n.         
// C program to print multiplication tables for odd numbers only from 1 to n  
*/                  

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++){   
        if (j % 2 == !0) // Check if the number is even 
        {
            continue; // Skip even numbers
        }          
        printf("Multiplication Table for %d:\n\n", j);   

        for (int i = 1; i <=10; i++)
         
    {
        printf("%d x %d = %d\n",j,i,j*i);
        
    }
        printf("\n\n");
    }
    
    return 0;
}