// Problem: Write a program to print the next character in the alphabet.
// Input: a    Output: b        
// Input: z    Output: a
// Input: A    Output: B    

#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch < 'z')
    {   
        printf("%c",ch+1);
    }
    else if(ch=='z'){
        printf("a");
    }
    else if(ch >= 'A' && ch < 'Z')
    {
        printf("%c",ch+1);
    }
    else if(ch=='Z'){
        printf("A");
    }
    else{
        printf("Invalid input");
    }   
    return 0;
}