#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int low=INT_MAX;
    int index=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]<low){
            low=a[i];
            index=i+1;
        }
    }
    printf("%d %d",low,index);
    
    return 0;
}