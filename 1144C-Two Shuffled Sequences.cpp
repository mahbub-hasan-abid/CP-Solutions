//12april2023(11:27PM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    vcd(vc1);
    vcd(vc);
    vcd(vc2);
    cin>>n;
    getintovc(vc,n);
    sort(vc.begin(),vc.end());
    vc1.pb(vc[0]);
//cout<<"done"<<endl;
    fl(i,1,vc.size())
    {
        if(vc[i]==vc[i-1])
        {
            cnt++;
            if(cnt>=2)
            {
                no;
                return 0;
            }
            vc2.pb(vc[i]);
        }
        else
        {
            cnt=0;
            vc1.pb(vc[i]);
        }
 
    }
    yes;
    cout<<vc1.size()<<endl;
    printvc(vc1);cout<<endl;
    cout<<vc2.size()<<endl;
    reverse(vc2.begin(),vc2.end());
    printvc(vc2);
 
 
 
    //main();
}