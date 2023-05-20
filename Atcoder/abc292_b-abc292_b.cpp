
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
    int n, q;
    cin >> n >> q;
    vector<int> yellow(n), red(n), removed(n);

    while (q--)
    {
        int c, x;
        cin >> c >> x;
        x--;
        if (c == 1)
        {
            yellow[x]++;
            if (yellow[x] == 2)
            {
                removed[x] = 1;
            }
        }
        else if (c == 2)
        {
            red[x] = 1;
            removed[x] = 1;
        }
        else
        {
            if (removed[x])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;


//main();


}
