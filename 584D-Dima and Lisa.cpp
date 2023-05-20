 
 
//12may2023(2:52PM)
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
bool isPrime(ll s)
{
    if(s==1)return true;
    else if(s<4)return false;
    else if(s%2==0)return true;
    else
    {
        for(ll i=3; i<=sqrt(s); i+=2)
        {
            if(s%i==0)return true;
        }
    }
    return false;
 
}
ll nearest_prime(ll x)
{
    x++;
    bool res=true;
    while(res)
    {
        x--;
        res=isPrime(x);
 
    }
    return x;
 
}
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc);
    ll n1=nearest_prime(n);
    //cout<<"m="<<m<<endl;
    if(n1==n)
    {
        cout<<1<<endl;
        cout<<n1<<endl;
        return 0;
    }
    ll rest_val=n-n1;
    //cout<<"rest_val="<<rest_val<<"  n1="<<n1<<endl;
    if(!isPrime(rest_val))
    {
        cout<<2<<endl;
        cout<<rest_val<<" "<<n1<<endl;
        return 0;
    }
    ll rest_val_cons=rest_val;
    while(1)
    {
        ll prime_near_rest_val=nearest_prime(rest_val-1);
       // cout<<"rest_val="<<rest_val<<"  prime_near_rest_val="<<prime_near_rest_val<<"  rest_val_cons - prime_near_rest_val="<<rest_val_cons-prime_near_rest_val<<endl;
        if(!isPrime(rest_val_cons-prime_near_rest_val))
        {
            cout<<3<<endl;
            cout<<rest_val_cons-prime_near_rest_val<<" "<<prime_near_rest_val<<" "<<n1<<endl;
            return 0;
        }
        else
        {
            rest_val=prime_near_rest_val;
        }
 
 
    }
 
 
main();
    }
 
 
 
 
 
 
 
 
 
 