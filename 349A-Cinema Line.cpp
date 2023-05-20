 
//18march2023(11:50PM)
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
    ll n,m=0,t,i,j,k,x=0,y=0,z=0,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
    n=vc.size();
    fl(i,0,n)
    {
        a=vc[i];
        if(a==25)
        {
            x++;
        }
        else if(a==50)
        {
            y++;
            x--;
        }
        else if(a==100)
        {
            z++;
            x--;
            y--;
            if(y<0)
            {
                y++;
                x-=2;
            }
        }
        //cout<<x<<" "<<y<<" "<<z<<endl;
        if(x<0||y<0||z<0){
            m=99;
            no
            break;
        }
 
    }
    if(m==0)yes
 
 
 
 
 // main();
}