#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sec second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int b, F, e, p, f, t; int cnt = 0; vector<vi> mat;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>b;
	for(int i=0; i<b; i++){
        cin>>F>>e>>p; mat.pb({F, e, p});
	}

    cin>>F;
    for(int i=0; i<F; i++){
        cin>>t;
        for(int j=0; j<b; j++){
            if(mat[j][0] <= t && mat[j][1] >= t){mat.erase(j); j--;}
        }
    }

    b = vec.size();
    for(int i=0; i<b; i++) cnt+=mat[i][2];
    cout<<cnt;

	return 0;
}
