 
//28march2023(1:00PM)
//28march2023(4:36PM)
 
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
    bool inc=true,prnt=true;
    ll n,i;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    reverse(vc.begin(),vc.end());
    fl(i,0,vc.size())
    {
        if(inc)
        {
            if(vc[i]>vc[i+1])
                inc=false;
        }
        else
        {
            if(vc[i]<vc[i+1])
            {
                cout<<vc.size()-i-1<<endl;
                prnt=false;
                break;
            }
        }
    }
 
    if(prnt)cout<<0<<endl;
 
 
 
 
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