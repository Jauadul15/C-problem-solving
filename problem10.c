// Problem 10: Two digits
// Problem: Given a two-digit number, check if the digits are divisible by each other. If true, print "YES", otherwise print "NO".  
// Input: 12    Output: YES
// Input: 21    Output: YES 
// Input: 10    Output: NO
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<=99 && n>=10){
        int a=n%10,
        b=n/10;
    if (a%b==0||b%a==0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    }  
    return 0;
}