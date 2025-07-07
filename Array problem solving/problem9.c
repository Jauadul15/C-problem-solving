#include<stdio.h>

int main(){
    int a[10000],b[10000];

    int lenght1=0,lenght2=0;
    printf("Array lenght\n");
    scanf("%d",&lenght1);
    printf("the array element of a\n");
    for (int i = 0; i < lenght1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("A=\n");
    for (int i = 0; i < lenght1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("Update a value\n");
    a[2]=100;
    //a array print
    printf("\n");
    printf("\n");

    printf("After a to b copy\n");

    for (int i = 0; i < lenght1; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i < lenght1; i++)
    {
        printf("%d ",b[i]);
    }
    
    
    
    return 0;
}