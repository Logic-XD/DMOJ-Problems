#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define nl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
constexpr ll inf = 0x3f3f3f3f3f3f3f3fLL;
const int mod = 1e9+7;
const double PI = 3.1415926535897932384626433832795;
//---------------------------------------------------------------------------end-------------------------------------------------------------------------------------

int t; string s;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>t;
	for(int _=0;_<t;_++){
        cin>>s; int n = s.size()-1; string ans = "YES";
        for(int i=0; i<n; i++){
            if((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u')){
                if((s[i] != 'k') && (s[i] != 'n') && (s[i] != 'h') && (s[i] != 'm') && (s[i] != 'r') && (s[i] != 'f')){ans = "NO"; break;}
                if((s[i+1] != 'a') && (s[i+1] != 'e') && (s[i+1] != 'i') && (s[i+1] != 'o') && (s[i+1] != 'u')){ans = "NO"; break;}
                if((s[i] == 'h') && (s[i+1] == 'u')){ans = "NO"; break;}
                if((s[i] == 'f') && (s[i+1] != 'u')){ans = "NO"; break;}
            }
        }
        if((s[n] != 'a') && (s[n] != 'e') && (s[n] != 'i') && (s[n] != 'o') && (s[n] != 'u')) ans = "NO";
        cout<<ans<<nl;
	}

	return 0;
}
