#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
typedef long long ll; typedef vector<int> vi; typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

int t, n, m, p, q, k, d; string s;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin>>t;
    for(int _=0; _<t; _++){
        unordered_map<string, vector<pair<int, int>> > mp; int cnt = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>m;
            for(int j=0; j<m; j++){cin>>s>>p>>q; mp[s].pb({p,q});}
        }

        cin>>k;
        for(int i=0; i<k; i++){
            cin>>s>>d;
            sort(mp[s].begin(), mp[s].end());

            for(pair<int, int> pr: mp[s]){
                if(d >= pr.second){cnt += pr.first*pr.second; d -= pr.second;}
                else{cnt += pr.first*d; break;}
            }
        }

        cout<<cnt<<nl; mp.clear();
    }
    return 0;
}
