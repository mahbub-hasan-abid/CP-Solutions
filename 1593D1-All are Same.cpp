 
//10march2023(7:29PM)
//10march2023(9:53PM)
//11march2023(6:03PM)
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
void  sol()
{
    ll n,i,mnNb,low=0,rr=0,m=0,mn,mx,odd=0,even=0,xyz=0;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    sort(vc.begin(),vc.end());
    fl(i,0,n)
    {
        rr=vc[i]-vc[0];
        xyz=__gcd(rr,xyz);
 
    }
if(xyz==0)
    cout<<-1<<endl;
    else cout<<xyz<<endl;
 
 
 
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