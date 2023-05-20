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
    ll n,a,b,i,m1=1e9,m2=1e9;
    cin>>n;
    vector<pair<ll,ll>>vc11;
    vector<pair<ll,ll>>vc01;
    vector<pair<ll,ll>>vc10;
    fl(i,0,n)
    {
        cin>>a>>b;
        if(b==11)
            vc11.push_back({a,b});
        else if(b==10)
            vc10.push_back({a,b});
        else if(b==01)
            vc01.push_back({a,b});
    }
    sort(all(vc11));
    sort(all(vc10));
    sort(all(vc01));
    bool a11=false;
    bool a22=false;
    // cout<<vc11.size()<< " "<<vc10.size()<<" "<<vc01.size()<<endl;
    if(vc11.size()>0)
    {
        m1=vc11[0].first;
        a11=true;
    }
 
 
        if(vc10.size()>0&&vc01.size()>0)
        {m2=vc10[0].first+ vc01[0].first;
        a11=true;
 
        }
 
    // cout<<"m1="<<m1<<"  m2="<<m2<<endl;
    if(a11)
    {
        cout<<min(m2,m1)<<endl;
        return 0;
    }
 
cout<<-1<<endl;
 
 
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