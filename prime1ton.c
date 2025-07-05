#include<stdio.h>

int main(){
    int x,j,count=0;
    scanf("%d",&x);

    if (x<=1)
    {
        printf("Not Prime Number");
        return 0;
    }
    for (int i = 2; i <=x; i++)
    {
        for ( j = 2; j <=x; j++)
        {
            if (i%j==0)
            {
                break;
            }
            
        }
        if (i==j)
        {
            printf("%d ",j);
        }   
    }
    return 0;
}