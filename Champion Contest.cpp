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

int n, k, a, b; vector<vi> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>k;
	for(int i=0; i<n; i++){
        cin>>a; vec.pb({a, i, i});
	}
	sort(vec.begin(), vec.end());

	for(int i=0; i<k; i++){
        cin>>a>>b; vec[max(a, b)-1][1]--;
	}

    for(int i=1; i<n-1; i++){
        if((vec[i-1][0] == vec[i][0]) || (vec[i][0] == vec[i+1][0])) vec[i][1]--;
    }
    if(vec[n-1][0] == vec[n-2][0]) vec[n-1][1]--;

    sort(vec.begin(), vec.end, sortcol(2));
    for(int i=0; i<n; i++){
        if(vec[i][1] < 0) vec[i][1] = 0;
        cout<<vec[i][1]<<' ';
    }


	return 0;
}
