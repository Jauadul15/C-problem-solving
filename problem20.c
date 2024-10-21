#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int salami[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&salami[i]);
    }

    int bigSalami=salami[0];
    for (int i = 0; i < n; i++)
    {
        if (salami[i]>bigSalami)
        {
            bigSalami=salami[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",bigSalami-salami[i]);
    }
    printf("\n");
    return 0;
}