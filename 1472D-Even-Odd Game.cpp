 
 
//1april2023(1:58PM)
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
    ll n,i,scA=0,scB=0;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    sort(vc.begin(),vc.end(),greater<>());
    fl(i,1,n+1)
    {
       // cout<<i<<" "<<vc[i-1]<<endl;
        if(i%2==1)
        {
            if(vc[i-1]%2==0)
                scA+=vc[i-1];
        }
        else
        {
            if(vc[i-1]%2==1)
                scB+=vc[i-1];
        }
 
       // vc.erase(vc.begin());
    }
    //cout<<"Ans="<<scA<<" "<<scB<<endl;
    if(scA>scB)cout<<"Alice"<<endl;
    else if(scA<scB)cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;
 
 
 
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