 
//23march2023(10:10PM)
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
void sol()
{
    ll n,a,i,k,p=0,pp=0,sum=0;
    vcd(vc);
    cin>>n;
    cin>>a;
    vc.pb(a);
    if(a>0)p=1;
    else p=-1;
    pp=p;
    fl(i,0,n-1)
    {
        cin>>a;
        if(a>0)p=1;
            else p=-1;
 
                 if(p==pp)
            {
                vc.pb(a);
            }
            else
            {
               // cout<<"else dhukche"<<endl;
                sort(vc.begin(),vc.end(),greater<ll>());
                 sum=sum+vc[0];
                 vc.clear();
                 vc.pb(a);
               // cout<<sum<<endl;
 
 
            }
            pp=p;
            //fl(k,0,vc.size())cout<<vc[k]<<" ";
            //cout<<endl;
    }
     sort(vc.begin(),vc.end(),greater<ll>());
                 sum=sum+vc[0];
 
    cout<<sum<<endl;
 
 
 
 
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