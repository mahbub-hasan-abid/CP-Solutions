 
 
 
//26march2023(4:41PM)
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
void sol()
{
    ll n,m,i;
    cin>>n;
    vcd(vc1);vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    getintovc(vc1,n);
    n=vc.size();
    fl(i,0,n)
    {
        if(vc[i]>vc1[i])
            swap(vc[i],vc1[i]);
    }
    ll mx1=*max_element(vc1.begin(),vc1.end());
    ll mx=*max_element(vc.begin(),vc.end());
    if(mx==vc[vc.size()-1]&&mx1==vc1[vc1.size()-1])yes
        else no
 
 
 
 
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