 
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    bool nxn=true;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    sort(vc.begin(),vc.end());
    fl(i,0,n)
    {
        //cout<<vc[i]<<endl;
       if(vc[i]!=(i+1))
       {
           //cout<<i<<" "<<vc[i]<<endl;
           cout<<i+1<<endl;
           nxn=false;
           break;
       }
    }
    if(nxn)cout<<n+1<<endl;
 
 
 
 
  //main();
}