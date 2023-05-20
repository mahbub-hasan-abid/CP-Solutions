//12april2023(12:18PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define p-1 cout<<"-1"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}n=vc.size();}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) {for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";cout<<endl;}
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
void sol()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,sum=0;
    string s,s1,s2,s3;
    cin>>n>>m;
    vector<ll>vc[m];
    fl(i,0,n)
    {
        fl(j,0,m)
        {
            cin>>a;
            vc[j].push_back(a);
        }
    }
 
    fl(j,0,m)
    {
        sort(vc[j].begin(),vc[j].end());
       // printvc(vc[j]);
        sum=0;cnt=0;
        fl(i,0,n)
        {
            if(i!=0)
                sum=sum+vc[j][i-1];
                cnt=cnt+((vc[j][i]*i)-sum);
                //cout<<"sum="<<sum<<"  cnt="<<cnt<<endl;
 
 
        }
        ans=ans+cnt;
        //cout<<"sum="<<ans<<"  of "<<j<<endl;
    }
 
cout<<ans<<endl;
 
 
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