// staircase problem
#include<iostream>
using namespace std;
int noofways(int n)
{
    if (n<=1)
    {
       return 1;
    }
    else
    {
        return noofways(n-1)+noofways(n-2);

    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ways;

    if (n>0&&n<25)
    {
        ways=noofways(n);
        cout<<ways;
    }
    else
    {
        cout<<"Wrong input";
    }
    
    return 0;
}
