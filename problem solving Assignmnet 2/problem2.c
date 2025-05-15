#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int countOne=0;
    int countZero=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
    {  
        countZero++;
    }
    if (a[i]==1)
    {
        countOne++;
    }
    }
    printf("%d %d",countZero,countOne);
    
    return 0;
}