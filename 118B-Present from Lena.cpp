//14march2023(11:31AM)
//14march2023(11:48AM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,kkk=0;
    string s,s1,s2,s3;
    cin>>n;
    t=n;
    x=n;
    y=n;
    n++;
    while(n--)
    {
        k=x-1;
        x--;
        for(i=k;i>=0;i--)
        {
            cout<<"  ";
            k--;
        }
        for(j=0;j<=y-n;j++)
        {
            cout<<j;
            if(kkk!=0)
                cout<<" ";
            kkk=999;
        }
        j--;
        while(j--)
        {
             cout<<j;
             if(j!=0)cout<<" ";
        }
 
 
        cout<<endl;
    }
    n=t;
    x=n;
    y=n;
int    yy=n-1;
   // n++;
   int mn=1;
   int yyy=0;
    while(n--)
    {
 
        for(i=1;i<=mn;i++)
        {
            cout<<"  ";
 
        }
        mn++;
 
 
        i=0;
       for(int xx=0;xx<x;xx++)
       {
 
           cout<<xx;
           if(xx==0&&x==1)
           {
 
           }
           else cout<<" ";
 
       }
        x--;
 
        for(int ii=n-1;ii>=0;ii--)
        {
            cout<<ii;
            if(ii!=0)cout<<" ";
 
        }
 
 
        cout<<endl;
    }
 
 
 
 
 
 
 // main();
}