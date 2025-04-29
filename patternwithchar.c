// C program to print a pattern using characters
// Problem: Write a C program to print a pattern using characters. The pattern should be as follows:    
// A
// AA           
// AAA
// AAAA 
#include<stdio.h>
int main(){
    int n=7;
    char ch = 'A';
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%c",ch);
            
        }
        printf("\n");
        ch++;
    }
    return 0;
}