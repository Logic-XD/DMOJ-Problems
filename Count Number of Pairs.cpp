#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
typedef long long ll; typedef vector<int> vi; typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

ll n, m, a; vi vec; ll cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m;
	for(ll i=0; i<n; i++){
        cin>>a; vec.pb(a);
	}
	sort(vec.begin(), vec.end());

	for(ll i=0; i<n; i++){
        cnt += upper_bound(vec.begin(), vec.begin()+i, m-vec[i])-vec.begin();
	}

	cout<<cnt;

	return 0;
}
