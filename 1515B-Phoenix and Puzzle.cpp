 
//14march2023(11:37PM)
//15march2023(6:08PM)
//15march2023(7:03PM)
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
int check(ll a)
{
    ll n;
    n=sqrt(a);
    //cout<<n<<" "<<a<<endl;
    if((n*n)==a)
        return 1;
    else return 0;
}
 
void sol()
{
    ll n,x,ans=0;
    cin>>n;
    if(n%2==0&&check(n/2))yes
        else if(n%4==0&&check(n/4))yes
        else if(n%8==0&&check(n/8))yes
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