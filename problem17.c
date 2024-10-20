#include<stdio.h>

int main(){
    int x,y,count1=0,count2=0;
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&y);
        if (y==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }    
        
    }
    printf("%d %d",count1,count2);

    return 0;
}