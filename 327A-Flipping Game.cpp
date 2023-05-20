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
    ll n,m,t,i,j,kk=0,x,y,z,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
     cin>>n;
    vcd(a);
    getintovc(a,n);n=a.size();
    ll zero=0,zeromax=0;
     cnt=count(a.begin(),a.end(),1);
    if(cnt==n)
    {
        cout<<(n-1)<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        zero++;
        else
        zero--;
        zero=max(kk,zero);
        zeromax=max(zeromax,zero);
    }
    cout<<cnt+zeromax<<endl;
 
 
 
 
  //main();
}