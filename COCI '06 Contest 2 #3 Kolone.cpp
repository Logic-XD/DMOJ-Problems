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

int n1, n2, t; string r1, r2; vector<pair<int, char>> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n1>>n2>>r1>>r2>>t;
	for(int i=0; i<n1; i++){vec.pb({n1-i, r1[i]});}
	for(int i=0; i<n2; i++){vec.pb({n1+i, r2[i]});}

	for(int i=0; i<n1; i++){
        if(t >= (i+n2)) break;
        //no idea what I'm doing anymore sadge
	}


	return 0;
}
