#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int n, m, s, t; vector<pi> q; bool a; int cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>m;
	for(int i=0; i<m; i++){
        cin>>s>>t; q.pb({s, t});
	}

    for(int x=1; x<n+1; x++){
        for(int y=1; y<n+1; y++){
            a = true;
            for(int i=0; i<n; i++){
                if((q[i].f == x) || (q[i].sec == y) || (abs(q[i].f-x) == abs(q[i].sec-y))){cout<<x<<' '<<y<<nl; a = false; break;}
            }
            if(a) cnt++;
        }
    }

    cout<<cnt;

	return 0;
}
