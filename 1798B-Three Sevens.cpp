 
//27march2023(7:44PM)
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
    ll day=0,i,j,k;
    map<ll,ll>mp1,mp2;
    cin>>day;
    fl(i,1,day+1)
    {
        ll participants;
        cin>>participants;
        fl(j,1,participants+1)
        {
            ll partNum;
            cin>>partNum;
            mp1[partNum]=i;
        }
    }
    for(auto ii:mp1)
    {
        mp2[ii.second]=ii.first;
       // cout<<ii.first<<" "<<ii.second<<endl;
    }
    if(mp2.size()!=day)cout<<-1<<endl;
    else
    {
        for(auto ii:mp2)
    {
       // mp2[ii.second]=ii.first;
       // cout<<ii.first<<" "<<ii.second<<endl;
       cout<<ii.second<<" ";
    }cout<<endl;
 
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