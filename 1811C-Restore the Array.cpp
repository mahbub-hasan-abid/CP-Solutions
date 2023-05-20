 
//7april2023(11:55PM)
//8april2023(12:17AM)
//8april2023(2:07AM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    bool go=true,go2=false;
    cin>>n;
    vcd(vc);
    y=n-1;
    getintovc(vc,y);
    vcd(vc1);
    ll mn=*min_element(vc.begin(),vc.end());
  //  cout<<mn<<endl;
    fl(i,0,vc.size()-1)
    {
        if(go&&vc[i]<vc[i+1])
        {
            vc1.pb(0);
            vc1.pb(vc[i]);
                go=false;
                go2=true;
        }
        else if(go2&&vc[i]>vc[i+1])
        {
            vc1.pb(vc[i+1]);
 
 
        }
 
        else
        vc1.pb(vc[i]);
//printvc(vc1);
    }
    if(vc1.size()+1==n)
    vc1.pb(vc[vc.size()-1]);
    else
    {
        vc1.pb(0);
        vc1.pb(vc[vc.size()-1]);
    }
    printvc(vc1);
 
 
 
 
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