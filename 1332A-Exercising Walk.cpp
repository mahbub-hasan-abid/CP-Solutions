//30march2023(8:26PM)
//30march2023(9:20PM)
 
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
    ll n,i,j,k,m,ans=0,sum=0;
    ll l,r,d,u,x,y,x1,x2,y1,y2;
    ll dl=0,dr=0,du=0,dd=0;
    cin>>l>>r>>d>>u>>x>>y>>x1>>y1>>x2>>y2;
    dl=x-x1;
    dr=x2-x;
    du=y2-y;
    dd=y-y1;
    //cout<<dl<<" "<<dr<<" "<<du<<" "<<dd<<endl;
     if(dl==0&&dr==0&&l>0||dr==0&&dl==0&&r>0||du==0&&dd==0&&u>0||dd==0&&du==0&&d>0)
     {
           no
           return 0;
     }
 
      else
      {
    if(l>=r)
    {
        if((l-r)>dl)
        {
            no
            //cout<<1<<endl;
            return 0;
 
        }
 
    }
    else
    {
        if((r-l)>dr)
        {
            no
            //cout<<2<<endl;
            return 0;
 
 
        }
    }
    if(d>=u)
    {
        if((d-u)>dd)
        {
            no
            //cout<<3<<endl;
            return 0;
 
        }
 
    }
    else
    {
        if((u-d)>du)
        {
            no
            // cout<<4<<endl;
            return 0;
 
        }
        }
 
 
    }yes
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