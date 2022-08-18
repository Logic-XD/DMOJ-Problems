#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
#define f first
#define s second
#define debug cout<<"HERE"<<endl;
#define ell "\n"
#define all(__x) __x.begin(),__x.end()

//#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef unsigned __int128 u128;
typedef __int128 int128;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LLINF = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int a, b, c; string s; vi vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>a>>b>>c>>s; vec.pb(a); vec.pb(b); vec.pb(c); sort(vec.begin(), vec.end());
	for(int i=0; i<3; i++){
        if(s[i] == 'A') cout<<vec[0]<<' ';
        if(s[i] == 'B') cout<<vec[1]<<' ';
        if(s[i] == 'C') cout<<vec[2]<<' ';
	}

	return 0;
}
