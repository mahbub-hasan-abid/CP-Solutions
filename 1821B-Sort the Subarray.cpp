 
//4may2023(4:37PM)
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
    ll n;
    cin>>n;
    vcd(vc1);
    vcd(vc2);
    getintovc(vc1,n);n=vc1.size();
    getintovc(vc2,n);n=vc2.size();
    ll f,l;
    ll i=0;
    while(1)
    {
        if(vc1[i]!=vc2[i])
        {
            //cout<<"i="<<i<<endl;
            f=i;
            while(vc2[f]>=vc2[f-1]&&vc2[f-1]==vc1[f-1]&&f>-1)f--;
                break;
        }
        i++;
 
    }
    i=vc1.size()-1;
    while(1)
    {
         if(vc1[i]!=vc2[i])
        {
           // cout<<"i="<<i<<endl;
            l=i;
            //if(l==vc.size()-1)break;
            while(vc2[l]<=vc2[l+1]&&vc2[l+1]==vc1[l+1]&&l+1<vc1.size())
            {
                //cout<<vc2[l]<<"<="<<vc2[l+1]<<"  && "<<vc2[l+1]<<"=="<<vc1[l+1]<<"&& l="<<l<<"<"<<vc1.size() <<endl;
 
                l++;
            }
                break;
        }
        i--;
 
    }
 
        cout<<f+1<<" "<<l+1<<endl;
        //cout<<vc2[f]<<" "<<vc2[l]<<" "<<f+1<< " "<<l+1 <<endl;
 
 
 
 
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