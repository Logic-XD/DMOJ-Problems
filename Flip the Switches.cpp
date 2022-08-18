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

int n; string s; char c; bool b = true; int cnt = 0;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>s;
	for(int i=n-1; i>=0; i--){
        if(b && s[i] == '1'){cnt++; c = s[i]; b = false;}
        if((!b) && s[i] != c){cnt++; c = s[i];}
	}
    cout<<cnt;

	return 0;
}
