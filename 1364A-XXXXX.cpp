 
//25march2023(11:00PM)
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
int sol()
{
    ll n,m,i,pos1=0,pos2=0;
    cin>>n>>m;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    ll sum=accumulate(vc.begin(),vc.end(),0);
    if(sum%m!=0){
            cout<<n<<endl;
            return 0;
    }
    else{
    fl(i,0,n)
    {
        if(vc[i]%m!=0)
        {
            pos1=n-(i+1);
            break;
        }
    }
 
 for(i=n-1;i>=0;i--)
    {
        if(vc[i]%m!=0)
        {
            pos2=i;
            break;
        }
    }
    }
   // cout<<pos1<<" "<<pos2<<endl;
    if(pos1==0&&pos2==0)cout<<-1<<endl;
    else
    cout<<max(pos1,pos2)<<endl;
 
return 0;
 
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