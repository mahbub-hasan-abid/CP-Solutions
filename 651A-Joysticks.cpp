 
//10march2023(10:29AM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,mx,mn;
    string s,s1,s2,s3;
    cin>>n>>m;
    mx=max(n,m);mn=min(n,m);
    while(1)
    {
       // cout<<mx<<" "<<mn<<endl;
        if(mx<=0||mn<=0||mx<=1&&mn<=1)
        {
            cout<<cnt<<endl;
            break;
        }
        else
        {
            mx-=2;
            mn+=1;
            cnt++;
 
        }
        if(mx<=2||mn<=2)
            {
                n=mx;
                m=mn;
                mx=max(n,m);mn=min(n,m);
            }
    }
   // cout<<cnt<<endl;
 
 
 
 
  //main();
}