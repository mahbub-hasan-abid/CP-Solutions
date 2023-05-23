 
//21may2023(4:20PM)
//22may2023(12:43PM)
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
vcd(vc);
bool is_equal()
{
    ll i;
    fl(i,0,vc.size()-1)
    {
        if(vc[i]!=vc[i+1])
            return true;
    }
    return false;
 
}
 
 
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n;
 
    getintovc(vc,n);
    n=vc.size();
    while(1)
    {
        sort(all(vc));
        cnt=0;
        fl(i,0,vc.size())
        {
            if(vc[i]==0)
                cnt++;
            else break;
        }
        if(cnt==vc.size())
        {
            cout<<0<<endl;
            return 0;
        }
        if(vc[0+cnt]==vc[vc.size()-1])
            break;
        for(i=vc.size()-1;i>0;i--)
        {
            if(vc[i]>vc[i-1])
            vc[i]=vc[i]-vc[i-1];
        }
 
    }
 
 
    cout<<vc[vc.size()-1]*(vc.size()-cnt)<<endl;
    //cout<<accumulate(all(vc),0)<<endl;
 
 
 
 
 
 
  //main();
}