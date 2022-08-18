#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
typedef long long ll; typedef vector<int> vi; typedef vector<pair<int, int>> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL; const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//-----------------------end----------------------------

int n; string s; vector<char> c;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n>>s; n /= 2;
	for(int i=0; i<n; i++){
        if((s[2*i] == 'G') || (s[2*i+1] == 'H')) c.pb('a');
        else if((s[2*i] == 'H') || (s[2*i+1] == 'G')) c.pb('b');
	}

    s = "";
    for(int i=0; i<c.size(); i++){
        if(c[i] != c[i+1]) s+=c[i];
    }

    int ans = s.size();
    if(s[s.size()-1] == 'a') ans--;
    cout<<ans;

	return 0;
}
