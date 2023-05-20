 
//23april2023(4:48PM)
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
    ll n,i,j,k;bool pr=true;
    vcd(vc);
    cin>>n;
    k=n+2;
    getintovc(vc,k);
    //n=vc.size();
     sort(all(vc));
 
    ll sum1=accumulate(vc.begin(),vc.begin()+n,0LL);
 
    if(sum1==vc[vc.size()-2]||sum1==vc[vc.size()-1])
    {
        fl(i,0,n)cout<<vc[i]<<" ";cout<<endl;
        pr=false;
    }
    else
    {
        sum1+=vc[n];
        fl(i,0,n)
        {
 
            if(sum1-vc[i]==vc[n+1])
            {
                vc.erase(vc.begin()+i);
                fl(i,0,n)cout<<vc[i]<<" ";cout<<endl;
                pr=false;
                break;
            }
        }
    }
    if(pr)cout<<-1<<endl;
 
 
 
 
 
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