#include<bits/stdc++.h>
using namespace std;
int checkYear(string aa)
{
    int flag =0;
    for (int i=0; aa[i]!=NULL; i++)
    {
        for(int j=1; aa[j]!=NULL; j++)
        {
            if (i==j)
            {
                continue;
            }
            else if (aa[i]==aa[j])
            {
                flag = 1;
            }
        }
    }
    return flag;

}
int main()
{
    int a;
    string b;
    cin >> a;
    a=a+1;
    b = to_string(a);
    while (1)
    {
        if (checkYear(b)==1)
        {
            a = a+1;
            b = to_string(a);
            checkYear(b);
        }
        else
        {
            cout << b << endl;
            break;
        }
    }


}
