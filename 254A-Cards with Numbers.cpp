//19april2023(8:54PM)
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
 
 
int main()
{
    faster;
    ll n,m,i,j,k;
    bool pr=true;
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    cin>>n;
    vector<pair<ll,ll>>vc;
    fl(i,0,n*2)
    {
        //cout<<i+1<<" "<<vc.size()<<endl;
        cin>>m;
        vc.push_back(make_pair(m,i+1));
    }
    sort(vc.begin(),vc.end());
    for(i=0; i<n*2; i+=2)
    {
        if(vc[i].first!=vc[i+1].first)
        {
            cout<<-1<<endl;
            return 0;
        }
        //cout<<vc[i].second<<" "<<vc[i+1].second<<endl;
    }
 
 
    for(i=0; i<n*2; i+=2)
    {
        cout<<vc[i].second<<" "<<vc[i+1].second<<endl;
    }
 
 
 
return 0;
 
 
    //main();
}