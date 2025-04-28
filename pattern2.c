// right-angled triangle pattern example:   
//
//         *            
//        * *
//       * * *  
//      * * * *
//     * * * * *
//    * * * * * *  
//   * * * * * * *
// C program to print a right-angled triangle pattern of stars.             





#include<stdio.h>
int main(){
    int n;
    n=7;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;

}