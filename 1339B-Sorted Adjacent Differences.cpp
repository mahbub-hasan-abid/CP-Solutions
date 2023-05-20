 
//1may2023(8:14PM)
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
    ll n,i;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    sort(all(vc));
    ll last=n-1,fst=0;
    vcd(vc2);
    fl(i,0,n)
    {
        if(i%2==0)
        {
            vc2.pb(vc[last]);
            last--;
        }
        else
        {
            vc2.pb(vc[fst]);
            fst++;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<vc2[i]<<" ";
    }
    nl;
 
 
 
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