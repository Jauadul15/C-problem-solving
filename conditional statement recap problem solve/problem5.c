// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n],original[n];
    
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//         original[i]=a[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 int temp = a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n",original[i]);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=b && a<=c)
    {//a min
        if (b<=c)
        {   //c max
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else
        {   //b max
            printf("%d\n%d\n%d\n",a,c,b);
        }   
    }
    else if (b<=a && b<=c)
    {//b min
        if (a<=c)
        {   //c max
            printf("%d\n%d\n%d\n",b,a,c);
        }
        else
        {   //a max
            printf("%d\n%d\n%d\n",b,c,a);
        }   
    }
    else
    {
        if (a<=b)
        {
            //b max
            printf("%d\n%d\n%d\n",c,a,b);
        }else
        {
            printf("%d\n%d\n%d\n",c,b,a);
        }
    }
    printf("\n");

    // Original Order
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}