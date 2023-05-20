 
//13march2023(7:46PM)
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
#define p-1 cout<<"-1"<<endl;
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
ll func(ll a,ll b,ll x,ll y,ll n)
{
    ll dec;
    dec=min(a-x,n);
    a-=dec;
    n-=dec;
    dec=min(n,b-y);
    b-=dec;
    n-=dec;
    return a*b;
}
void sol()
{
    ll a,b,x,y,n,mx,mn,mx2,mn2,mm=0,ans;
    cin>>a>>b>>x>>y>>n;
      ans=min(func(a,b,x,y,n),func(b,a,y,x,n));
      cout<<ans<<endl;
 
 
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