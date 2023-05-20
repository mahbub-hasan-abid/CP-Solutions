 
 
//8may2023(11:43PM)
//9may2023(11:40AM)
//9may2023(1:57PM)
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
    ll n,i,k,cnt=0,last;
    char c,cc;
    vector<ll>vc;
    vcd(vc1);
    string s;
    bool no_diff=true;
    cin>>n>>c>>s;
    fl(i,0,s.size())
    {
 
        if(s[i]!=c)
        {
           no_diff=false;
 
        }
        else
            last=i+1;
 
    }
     if(no_diff)
        cout<<0<<endl;
     else if(last>(n/2))
     {
         cout<<1<<endl;
         cout<<last<<endl;
     }
     else
     {
         cout<<2<<endl;
         cout<<n-1<<" "<<n<<endl;
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