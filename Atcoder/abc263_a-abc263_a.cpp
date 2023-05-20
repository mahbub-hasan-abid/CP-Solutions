//15jan2023(10:02PM)
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
    ll a,b,c,d,e;
    map<ll,ll>mp;
    cin>>a>>b>>c>>d>>e;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    mp[e]++;
    if(mp.size()>2)cout<<"No"<<endl;
    else
    {
        for(auto aa:mp)
        {
            if(aa.second==2||aa.second==3)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
                break;
        }
    }





}
