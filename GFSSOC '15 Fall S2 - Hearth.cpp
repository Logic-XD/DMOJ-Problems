#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
typedef long long ll; typedef vector<int> vi; typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

int n, t, c; string s; vector<pair<string, int>> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>t;
	for(int i=0; i<n; i++){
        cin>>s>>c; vec.pb({s, c});
	}

    sort(vec.begin(), vec.end());

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(vec[i].second+vec[j].second+vec[k].second <= t) cout<<vec[i].first<<' '<<vec[j].first<<' '<<vec[k].first<<nl;
            }
        }
    }


	return 0;
}
