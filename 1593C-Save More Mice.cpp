 
//10March2023(11:10AM)
//10March2023(11:42AM)
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
    ll n,m,i=0,k,sum=0,cnt=0;
    cin>>n>>m;
    //vcd(vc);
    vector<ll>vc{0};
    k=m;
    getintovc(vc,k);
    sort(vc.begin(),vc.end(),greater<ll>());
   // fl(i,0,vc.size())cout<<vc[i]<<" ";
   // cout<<endl;
    i=0;
    while(1)
    {
       // cout<<"vc["<<i<<"]="<<vc[i]<<endl;
        sum=sum+(n-vc[i]);
        if(sum<vc[i+1])
            cnt++;
        else
        {
            cout<<cnt+1<<endl;
            break;
        }
        //cout<<sum<<endl;
 
        i++;
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