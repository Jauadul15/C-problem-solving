// Problem 7: A + B - C = D
// Problem: Given four integers A, B, C, and D, check if A + B - C = D. If true, print "YES", otherwise print "NO".     
// Input: 1 2 3 0    Output: YES
// Input: 1 2 3 1    Output: NO 
// Input: 1 2 3 2    Output: NO
// Input: 1 2 3 3    Output: NO

#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a+b-c==d)
    {
        printf("YES");
    }
    else if (a-b+c==d)
    {
        printf("YES");
    }
    else if (a+b*c==d)
    {
        printf("YES");
    }
    else if (a*b+c==d)
    {
        printf("YES");
    }
    else if (a-b*c==d)
    {
        printf("YES");
    }
    else if (a*b-c==d)
    {
        printf("YES");
    }  
    else
    {
        printf("NO");
    }
    
    
    return 0;
}
