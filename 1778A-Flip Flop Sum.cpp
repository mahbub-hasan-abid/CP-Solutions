 
//26march2023(4:41PM)
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
    int t, sum= 0, sum1= INT_MAX*(-1),sum5hat=0;
        //cout<<sum<<endl;
        cin >> t;
        int ar[t];
        for (int i = 0; i < t; i++)
        {
            cin >> ar[i];
            sum+=ar[i];
        }
 
        for (int i = 0; i < t - 1; i++)
        {sum5hat=sum;
            sum5hat=sum5hat-ar[i]-ar[i+1];
 
            sum5hat=sum5hat+(ar[i]*(-1))+(ar[i+1]*(-1));
            //cout<<sum5hat<<endl;
 
           /* if (sum5hat >= sum1)
            {
                sum1 = sum5hat;
            }*/
           sum1=max(sum5hat,sum1);
 
 
 
        }
 
        cout << sum1 << endl;
 
 
 
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