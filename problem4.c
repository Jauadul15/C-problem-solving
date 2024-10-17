#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        int j;
        scanf("%d",&j);
        if (j == 0)
        {
            printf("0");
        }
        while (j>0)
        {
            int digit=j%10;
            printf("%d ",digit);
            j /=10;
        } 
        printf("\n");
        
        
    }
    
    return 0;
}