//24march2023(12:09PM)
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
    ll i;
    char c;
 
    set<char>st;
    map<char,ll>mp;
    fl(i,0,4){
        cin>>c;
        mp[c]++;
        }
        if(mp.size()==1)cout<<-1<<endl;
        else if(mp.size()==4)cout<<4<<endl;
        else
        {
 
            for(auto aaa:mp)
            {
                if(aaa.second>2)
                {
                    cout<<6<<endl;
                    return 0;
                }
            }
            cout<<4<<endl;
 
        }
 
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
 