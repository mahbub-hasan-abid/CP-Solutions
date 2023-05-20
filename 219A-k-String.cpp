//15april2023(9:07PM)
//15april2023(10:12PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl;
//#define no cout<<"NO"<<endl;
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
    string s,s1,s2,s3;
    char ccc;
 
    map<char,ll> mp;
    cin>>n;
    cin>>s;
    if(s.size()%n!=0)cout<<-1<<endl;
    else
    {
        fl(i,0,s.size())
        {
            mp[s[i]]++;
        }
        if(mp.size()==1&&s.size()==n)cout<<s<<endl;
        else
        {
 
            ll no=s.size()/n;
            for(auto xcx:mp)
            {
                if(xcx.second%n!=0)
                {cout<<-1<<endl;
                return 0;
                }
            }
           // cout<<"else"<<no<<endl;
            fl(i,0,n)
            {
 
                for(auto xcx:mp)
                {
                    ll vcx=xcx.second/n;
                    while(vcx--)
                    cout<<xcx.first;
                }
 
            }
            cout<<endl;
 
        }
 
 
 
    }
   // main();
}