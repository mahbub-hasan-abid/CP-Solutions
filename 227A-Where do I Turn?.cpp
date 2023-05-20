 
//22march2023(8:30PM)
//22march2023(9:31PM)
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
    ll x1,x2,x3,y1,y2,y3;
    float m;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
 
 
 
    ll xy=((x1-x2)*(y2-y3))-((x2-x3)*(y1-y2));
    if(xy==0)cout<<"TOWARDS"<<endl;
    else if(xy>0)cout<<"LEFT"<<endl;
    else cout<<"RIGHT"<<endl;
 
 
 
 
 
  //main();
}