//29april2023(1:46PM)
//29april2023(10:36PM)
//30april2023(2:39PM)
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
    ll n,m,t,i,j,k,x,y,z,sum=0,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n>>m;
    vcd(vc1);
    vcd(vc2);
    vcd(vsum);
    vector<ll>vc;
    vector<pair<ll,ll>>vcp;
    while(n--)
    {
        cin>>a>>b;
        vc.push_back(a);
        vc1.push_back(b);
        vcp.push_back({a,b});
 
    }
    sort(all(vc));
    sort(all(vcp));
    vsum.pb(0);
    fl(i,0,vc1.size())
    {
        sum+=vcp[i].second;
        vsum.pb(sum);
    }
   // printvc(vsum);nl;
   // printvc(vc);nl;
   cnt=vsum[0];
    fl(i,0,vc.size())
    {
 
        ll ccc=vc[i]-m;
        auto it = upper_bound(vc.begin(), vc.end(), ccc);
 
       cnt=vsum[i+1]-vsum[it-vc.begin()];
      // cout<<"it="<<it-vc.begin()<<"  cnt="<<cnt<<endl;
      ans=max(ans,cnt);
    }
  // printvc(vc1);nl;
    cout<<ans<<endl;
 
 
 
 
  //main();
}