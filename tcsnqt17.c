// given an array of integers .........find  count of non overlapping subsets with a given no 
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,n2,s;
    scanf("%d",&n);
    int *a=(int *)malloc((n)*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    scanf("%d",&s);
    int found=0;
    for (int i = 0; i < n; i+=s)
    {
        found=0;
        for (int j=i; j<i+s&&j<n; j++)
        {
            if (a[j]==n2)
            {
                found=1;

            }
            
        }
        if (found)
        {
            continue;

        }
        else
        {
            printf("0");
            exit(0);

        }
        
    }
    printf("1");
    
    return 0;
}
