#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main()
{
    ll n,m;
    cin>>n;
    ll x,y;
    ll sum1=0, sum2=0,s1s0=0,s0s1=0,s1s1=0,s0s0=0;
    if(n==1)
    {
        cin>>x>>y;
        if(x%2==0&&y%2==0)cout<<0<<endl;
        else cout<<-1<<endl;
    }
    else
    {
        while(n--)
        {
 
            cin>>x>>y;
            if(x%2==0&&y%2==0)s0s0++;
            else if(x%2==0&&y%2==1)s0s1++;
            else if(x%2==1&&y%2==0)s1s0++;
            else if(x%2==1&&y%2==1)s1s1++;
            sum1+=x;
            sum2+=y;
        }
      //  cout<<sum1<<" "<<sum2<<endl;
 
        if(sum1%2==0 && sum2%2==0) cout<<0;
        else if(sum1%2==1&&sum2%2==1)
        {
            if(s1s0>0||s0s1>0)cout<<1<<endl;
            else
                cout<<-1<<endl;
        }
        else
       cout<<-1<<endl;
 
    }
   // main();
}