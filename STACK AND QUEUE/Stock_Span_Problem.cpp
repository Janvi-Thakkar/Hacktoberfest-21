Problem Link:
https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

My Solution:
https://practice.geeksforgeeks.org/viewSol.php?subId=5cdc8323b62b33546c00f80ce598882a&pid=701342&user=user_un1o


Code:

using namespace std;
#include <bits/stdc++.h> 

#define f(i,a,b) for(int i=a;i<b;i++)
#define ll long long int

int main()
{
    ll t,n;
    cin>>t;
    f(k,0,t)
    {
        cin>>n;
        ll c=0;
        ll a[n];
        f(c,0,n)
        {
            cin>>a[c];
        }
        f(i,0,n)
        {
            c=0;
            for(int j=i;j>=0;j--)
            {
                if(a[j]<=a[i])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
    
