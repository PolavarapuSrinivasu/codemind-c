#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,s=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    cout<<s;
}