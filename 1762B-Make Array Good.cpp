//19march2023(11:56PM)
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
void sol()
{
    ll i,j,k,n,m,x,y,p,f=0,sum=0,cnt=0,cnt0=1,a,b;
    string s,s1;
    vector<ll>v,v1;
    cin>>n ;
    for (i=0; i<n; i++)
    {
        cin>>x;
        v.pb(x);
        v1.pb(x);
    }
    sort(v1.begin(),v1.end());
    map<ll,ll>mp;
    for (i=0; i<n-1; i++)
    {
        if (v1[i+1]%v1[i]!=0)
        {
            x=v1[i+1]/v1[i];
            y=v1[i]*(x+1);
            mp[v1[i+1]]=y;
            v1[i+1]=y;
            cnt++;
 
        }
    }
    cout<<cnt<<endl;
    for (i=0; i<n; i++)
    {
        if (mp.find(v[i])!=mp.end())
        {
            cout<<i+1<<" ";
            y=mp[v[i]]-v[i];
            cout<<y<<endl;
        }
    }
 
 
 
}
 
int main()
{
    faster;
    ll tc;
    cin>>tc;
    while(tc--)
        sol();
 
 
 
 
 
 
    //main();
}