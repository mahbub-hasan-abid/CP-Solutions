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
 
 
 
 
}
 
int main()
{
    faster;
    ll tc;
   ll n,m,i,j,k;
    cin>>n>>m;
    vcd(vc1);vcd(vc2);
    getintovc(vc1,n);
    getintovc(vc2,m);
    ll mx1=*max_element(vc1.begin(),vc1.end());
    ll mn1=*min_element(vc1.begin(),vc1.end());
    ll mn2=*min_element(vc2.begin(),vc2.end());
    if((mn1*2)>mx1)mx1=(mn1*2);
    if((mn1*2)<=mx1&&mn2>mx1)cout<<mx1<<endl;
    else cout<<-1<<endl;
 
 
 
 
 
 
 
  //main();
}