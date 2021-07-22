// given a string...encrypt a->z z>a and so on 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[23];
    scanf("%s",s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        s[i]=97-s[i]+122;

    }
    printf("%s",s);
    
    
    return 0;
}
