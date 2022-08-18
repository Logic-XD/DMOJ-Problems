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

int n; vector<string> a, b; string t; int cnta = 0; int cntb = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int i=0; i<n; i++){cin>>t; a.pb(t);}
    for(int i=0; i<n; i++){cin>>t; b.pb(t);}
    for(int i=0; i<n; i++){
        if(a[i] == "rock" && b[i] == "scissors") cnta++;
        if(a[i] == "rock" && b[i] == "paper") cntb++;
        if(a[i] == "paper" && b[i] == "scissors") cntb++;
        if(a[i] == "paper" && b[i] == "rock") cnta++;
        if(a[i] == "scissors" && b[i] == "rock") cntb++;
        if(a[i] == "scissors" && b[i] == "paper") cnta++;
    }

    cout<<cnta<<' '<<cntb;

	return 0;
}
