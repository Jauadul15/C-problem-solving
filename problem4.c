//reversing a number
// C program to reverse a number    
//example: 1234 => 4321

#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        int k;
        scanf("%d",&k);
        if(k==0){
            printf("0\n");
        }
        while (k>0)
        {
            int digit=k%10;
            printf("%d",digit);
            k =k/10;
        }
        printf("\n");     
        
    }
    return 0;
}    