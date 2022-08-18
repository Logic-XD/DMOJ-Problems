#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int n, q, x, y, r; vector<double> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>q;
	for(int i=0; i<n; i++){
        cin>>x>>y; vec.pb(sqrt(pow(x,2)+pow(y,2)));
	}
	sort(vec.begin(), vec.end());

	for(int i=0; i<q; i++){
        cin>>r; auto cnt = upper_bound(vec.begin(), vec.end(), r); cout<<cnt-vec.begin()<<nl;
	}

	return 0;
}
