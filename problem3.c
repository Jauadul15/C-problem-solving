//count even,odd,positive,negative numbers 

#include<stdio.h>

int main(){
    int n;
    int evenCount=0,oddCount=0,negativeCount=0,positiveCount=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        if (x%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
        if (x<0)
        {
            negativeCount++;
        }else if (x>0)
        {
            positiveCount++;
        }       
    
    }
    printf("Even: %d\n",evenCount);
    printf("Odd: %d\n",oddCount);
    printf("Positive: %d\n",positiveCount);
    printf("Negative: %d\n",negativeCount);   
    return 0;
}