 
//13march2023(9:27PM)
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
 
ll rev(ll a)
{
    ll suma=0;
     while(a!=0)
    {
        suma=(suma*10)+a%10;
        a/=10;
        //cout<<suma<<endl;
    }
    return suma;
}
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,suma=0,sumb=0,sumc=0;
    string s,s1,s2,s3;
    cin>>a>>b;
    c=a+b;
    while(a!=0)
    {
        if(a%10!=0)
        suma=(suma*10)+a%10;
        a/=10;
    }
    while(b!=0)
    {
        if(b%10!=0)
        sumb=(sumb*10)+b%10;
        b/=10;
    }
     while(c!=0)
    {
        if(c%10!=0)
        sumc=(sumc*10)+c%10;
        c/=10;
    }
 
 //   cout<<rev(suma)<<" "<<rev(sumb)<<" "<<rev(sumc)<<endl;
    if(rev(suma)+rev(sumb)==rev(sumc))yes
        else no
 
 
 
 
 
  //main();
}