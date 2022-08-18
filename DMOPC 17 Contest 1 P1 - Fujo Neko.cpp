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

int r, c, q, x, y; vector<string> vec; string s;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>r>>c;
	for(int i=0; i<r; i++){
        cin>>s; vec.pb(s);
	}
	cin>>q;
	for(int i=0; i<q; i++){
        cin>>x>>y; char ans = 'N';
        for(int j=0; j<r; j++){
            if(vec[j][x-1] == 'X'){ans = 'Y'; break;}
        }
        for(int j=0; j<c; j++){
            if(vec[y-1][j] == 'X'){ans = 'Y'; break;}
        }
        cout<<ans<<nl;
	}


	return 0;
}
