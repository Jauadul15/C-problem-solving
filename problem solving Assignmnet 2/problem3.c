#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
        if (a[index-1]==0)
        {
            a[index-1]=1;
        }else{
            a[index-1]=0;
        }
        
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}