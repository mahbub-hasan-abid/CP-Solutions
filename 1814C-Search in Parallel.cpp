 
//6Apr2023(10:40PM)
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
#define p-1 cout<<"-1"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}n=vc.size();}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) {for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";cout<<endl;}
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
void sol()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    //string s,s1,s2,s3;
    ll s1,s2;
    vector<pair<ll,ll>>vc;
    vector<ll>vc1,vc2;
    cin>>n>>s1>>s2;
    fl(i,1,n+1)
    {
        cin>>a;
        vc.push_back(make_pair(a,i));
 
    }
    sort(vc.begin(),vc.end(),greater<>());
    /* for(i=0;i<vc.size();i++)
     {
         cout<<vc[i].first<<" "<<vc[i].second<<endl;
     }*/
    for(i=0; i<vc.size(); i++)
    {
        ll ft=(s1*(vc1.size()+1))*vc[i].first;
        ll sn=(s2*(vc2.size()+1))*vc[i].first;
        //  cout<<"ft="<<ft<<"  sn="<<sn<<endl;
        if(ft<sn)
        {
            vc1.pb(vc[i].second);
        }
        else if(ft>sn)
            vc2.pb(vc[i].second);
        else if(ft==sn)
        {
            if(vc1.size()>vc2.size())
            {
                vc2.pb(vc[i].second);
            }
           else  if(vc1.size()<vc2.size())
                vc1.pb(vc[i].second);
            else if(vc1.size()==vc2.size())
            {
                if(s1>s2)vc2.pb(vc[i].second);
                else
                    vc1.pb(vc[i].second);
 
 
            }
        }
 
    }
//   cout<<"ans"<<endl;
    cout<<vc1.size()<<" ";
    printvc(vc1);
    cout<<vc2.size()<<" ";
    printvc(vc2);
    // cout<<"end"<<endl;
 
 
 
 
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