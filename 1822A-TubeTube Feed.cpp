 
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
    ll n,m,t,i,cnt=0;
    cin>>n>>t;
    vcd(vc1);
    vcd(vc2);
    getintovc(vc1,n);
    n=vc1.size();
    getintovc(vc2,n);
    n=vc2.size();
    fl(i,0,n)vc1[i]+=i;
    fl(i,0,n)
    {
        if(vc1[i]>t)
        {vc2[i]=0;cnt++;}
    }
    if(cnt==vc1.size())cout<<-1<<endl;
    else
    {
        ll ans=*max_element(vc2.begin(),vc2.end());
        auto xnx=find(vc2.begin(),vc2.end(),ans)-vc2.begin();
        cout<<xnx+1<<endl;
    }
 
 
 
 
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