 
//6april(7:58PM)
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
    ll n,m,i,j,k,x,y,z,a,b,c,cnt=0,ans=INT_MAX;
    string s,s1,s2,s3;
    bool o=false,t=false,th=false;
    ll po=0,pt=0,pth=0;
    cin>>s;
    fl(i,0,s.size())
    {
       // cout<<"i="<<i<<endl;
       // if(i==10)break;
 
        if(s[i]=='1')
        {
            o=true;
            po=i;
        }
        else if(s[i]=='2')
        {
            t=true;
            pt=i;
        }
        else if(s[i]=='3')
        {
            th=true;
            pth=i;
        }
        if(o&&t&&th)
        {
            x=max(po,max(pt,pth))+1;
            y=min(po,min(pt,pth))+1;
            //cout<<"x="<<x<<" y="<<y<<endl;
            ans=min(ans,(x-y));
            if(s[y-1]=='1')o=false;
            else if(s[y-1]=='2')t=false;
            else if(s[y-1]=='3')th=false;
        }
    }
    if(ans==INT_MAX)cout<<0<<endl;
    else
cout<<ans+1<<endl;
 
 
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