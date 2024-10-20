#include<stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    if(a[x-1]==0){
        a[x-1]=1;
    }
    else{
        a[x-1]=0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    
    return 0;
}