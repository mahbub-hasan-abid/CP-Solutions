 
//12april2023(2:17PM)
//12april2023(4:22PM)
//12april2023(5:27PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define p-1 cout<<"-1"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}n=vc.size();}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) {for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";cout<<endl;}
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
void sol()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,sum=0;
    string s,s1,s2,s3;
    cin>>n>>a>>b>>m;
    if(n==0)sum=1;
    else
    {
        sum=n;
        ll mn=min(a,b);
        a-=mn;b-=mn;
        sum+=2*mn;
        sum+=min(n+1,max(a,b)+m);
    }
 
 
 
cout<<sum<<endl;
 
 
 
 
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