 
 
//30march2023(11:32PM)
 
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
   ll n,i;
        cin>>n;
        vector<int> a(n);
        ll c = 0, c1 = 0;
        fl(i,0,n){
            cin>>a[i];
            if (a[i]==0){
                c++;
            }else{
                c1++;
            }
        }
        ll k1;
        ll x = 0;
        if (c==0){
            k1 = 1;
        }else if (c1==0){
            k1 = 0;
        }else if (c<c1){
            k1 = 1;
            if (c1%2==1){
                x = 1;
            }
        }else{
            k1 = 0;
        }
        cout<<max(c, c1)-x<<endl;
        fl(i,0,n){
            if (a[i]==1 and x==1){
                x--;
            }else if (a[i]==k1){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
 
 
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