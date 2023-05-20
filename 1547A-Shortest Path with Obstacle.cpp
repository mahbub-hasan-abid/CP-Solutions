 
 
 
//9april2023(7:57PM)
//pc te problem...vai er pc te solve korte hocche ,,,kosto...
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
//#define p-1 cout<<"-1"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}n=vc.size();}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) {for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";cout<<endl;}
#define ff first
#define ss second
//#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
void sol()
{
    //faster;
    string s,s1,s2,s3;
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll sum=abs(x1-x2)+abs(y1-y2);
   // cout<<sum<<endl;
 
    if(x1==x2&&x2==x3&&y3<max(y1,y2)&&y3>min(y1,y2)||y1==y2&&y2==y3&&x3<max(x1,x2)&&x3>min(x1,x2)){
        sum+=2;
    }
    cout<<sum<<endl;
 
 
}
 
int main()
{
    // faster;
    ll tc;
    cin>>tc;
    while(tc--)
        sol();
 
 
 
 
 
 
    //main();
}