 
//14march2023(11:13PM)
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
    ll n,m,i,j,k,x,a,sum=0;
    cin>>n>>k;
    vcd(vc);
    fl(i,0,n)
    {
        cin>>a;
        vc.pb(a);
        if(i!=0)
        {
            if((vc[i-1]+a)<k)
            {
                x=k-(vc[i-1]+a);
                sum=sum+x;
                vc.pop_back();
                vc.pb(a+x);
            }
        }
    }
    cout<<sum<<endl;
    fl(i,0,n)cout<<vc[i]<<" ";
    cout<<endl;
 
 
 
 
  //main();
}