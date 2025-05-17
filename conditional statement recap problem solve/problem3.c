#include<stdio.h>

int main(){
    int a,b,c;
    char op,eq;
    scanf("%d %c %d %c %d",&a,&op,&b,&eq,&c);
    int correct_result;
    if (op=='+')
    {
        correct_result=a+b;
    }else if (op=='-')
    {
        correct_result=a-b;
    }
    else if (op=='*')
    {
        correct_result=a*b;
    }

    if (correct_result==c)
    {
        printf("Yes");
    }else{
        printf("%d\n",correct_result);
    }
    return 0;
}