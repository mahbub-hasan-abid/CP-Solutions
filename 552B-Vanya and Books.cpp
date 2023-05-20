 
//18maaaaaaaaaaaaaay2023(10:20PM)
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
 
ll num_dig(ll n)
{
    ll  cn=0;
    while(n>0)
    {
        n/=10;
        cn++;
    }
    return cn;
}
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
 
    cin>>n;
    ll dig=num_dig(n);
    ll s=0;
    ll f=9;
    fl(i,0,dig-1)
    {
        ans+=(f-s)*(i+1);
        s=f;
        f=(f*10)+9;
    }
    //cout<<f<<" "<<s<<endl;
    ans+=(n-s)*dig;
    cout<<ans<<endl;
 
 
 
 
 
  //main();
}