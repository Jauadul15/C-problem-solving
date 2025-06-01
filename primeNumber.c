#include<stdio.h>

int main(){
    int x,count =0;
    scanf("%d",&x);

    if (x<=1) 
    {
        printf("No");
        return 0;
    }
    for (int i = 2; i < x; i++)
    {   
        if (x%i==0)
        {   
            
            count++;
            break;
        } 
    }
    if (count==0)
    {
        printf("%d");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}