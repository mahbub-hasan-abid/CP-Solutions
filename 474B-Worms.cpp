 
//21march2023(9:28PM)
//21march2023(9:48PM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,sum=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc);
    fl(i,0,n)
    {
        cin>>a;
        sum=sum+a;
        vc.pb(sum);
    }
   // fl(i,0,vc.size())cout<<vc[i]<<" ";
    //cout<<endl;
    cin>>m;
    fl(i,0,m)
    {
        cin>>a;
 
       auto  ans=lower_bound(vc.begin(),vc.end(),a);
        cout<<ans-vc.begin()+1<<endl;
    }
 
 
 
 
 
 
 
 
 
 
 
 
  //main();
}