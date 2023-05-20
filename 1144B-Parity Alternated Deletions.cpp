//15jan2023(10:02PM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,sum=0,ans=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc1);
    vcd(vc2);
    fl(i,0,n)
    {
        cin>>m;
        if(m%2==0)
            vc2.pb(m);
        else vc1.pb(m);
    }
    sort(vc1.begin(),vc1.end(),greater<>());
    sort(vc2.begin(),vc2.end(),greater<>());
    ll v1s=vc1.size();
    ll v2s=vc2.size();
    if(abs(v1s-v2s)<2)
    {
        sum=0;
    }
    else if(vc1.size()>vc2.size())
    {
        fl(i,v2s+1,v1s)
        sum+=vc1[i];
    }
    else if(vc2.size()>vc1.size())
    {
        fl(i,v1s+1,v2s)
        sum+=vc2[i];
    }
 
    cout<<sum<<endl;
 
 
  //  main();
}