#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,n1,s1=0,s2=0,s=0;
    cin >> n;
    if (n%2==0)
    {
        n = n/2;
        s1 = n*n;
        s2 = n*(n+1);
        s = s2 - s1;
    }
    else
    {
        n1 = n/2 + 1;
        s1 = n1*n1;
        n = n-n1;
        s2 = n * (n+1);
        s = s2 - s1;
    }
    cout << s;
}
