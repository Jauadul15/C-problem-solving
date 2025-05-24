#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n >= 1 && n <= 5000)
    {
        for (int i = 1; i < n; i++)
        {
            if (i%5==0 || i%3==0)
        {
            printf("%d Yes\n",i);
        }else
        {
            printf("%d No\n",i);
        }
        }
    }else
    {
        printf("its not between 1 to 1000 please try again");
    }
    
    

    return 0;
}