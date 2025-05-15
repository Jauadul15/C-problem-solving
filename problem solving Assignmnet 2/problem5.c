#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int bigSalami=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>bigSalami)
        {
            bigSalami=a[i];
        }   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",bigSalami-a[i]);
    }
    printf("\n");
    return 0;
}