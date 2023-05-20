 
//18april2023(3:25PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
//#define yes cout<<"YES"<<endl;
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    ll sx,sy,ex,ey;
    ll xe=0,xwm=0,yn=0,ysm=0;
    bool yes=true;
    string s,s1,s2,s3;
    cin>>n>>sx>>sy>>ex>>ey>>s;
 
    ll distance_x=sx-ex;
    ll distance_y=sy-ey;
    if(distance_x>=0)xwm=distance_x;
    else xe=abs(distance_x);
 
    if(distance_y>=0)ysm=distance_y;
    else yn=abs(distance_y);
    fl(i,0,n)
    {
        //cout<<yn<<" "<<ysm<<" "<<xe<<" "<<xwm<<endl;
       if(s[i]=='N') yn--;
       else if(s[i]=='S') ysm--;
       else if(s[i]=='E') xe--;
       else if(s[i]=='W') xwm--;
       //cout<<"i= "<<i<<" "<<s[i]<<endl;
       if(yn<=0&&ysm<=0&&xe<=0&&xwm<=0)
       { yes=false;
       cout<<i+1<<endl;
       break;
 
       }
    }
    if(yes)cout<<-1<<endl;
 
 
 
 
 
 
 
  //main();
}