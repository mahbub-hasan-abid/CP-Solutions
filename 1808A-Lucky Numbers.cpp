//5march2023(9:46PM)
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
 
    string s,s1,s2,s3;
    ll l,i,r,k,t,x=INT_MAX;
    ll m=-INT_MAX;
    cin>>l>>r;
    fl(i,l,r+1)
    {
         k=i;
        ll mi=10,ma=0;
        while(k>0)
        {
            ll t=k%10;
            mi=min(mi,t);
            ma=max(ma,t);
            k/=10;
        }
        if(ma-mi>m)
        {
            m=ma-mi;
            x=i;
        }
        if(m==9) break;
    }
    cout<<x<<endl;;
 
 
 
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