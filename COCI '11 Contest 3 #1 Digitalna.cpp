#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define lc (rt<<1)
#define rc (rt<<1|1)
#define cl(a, b) memset(a, b, sizeof(a))
#define mp(a, b) make_pair((a), (b))
#define all(x) x.begin(),x.end()
#define pb push_back
#define pf push_front
#define debug cout<<"HERE"<<endl;
#define nl "\n"
#define len(x) x.size()
#define ord(x) (int)x
#define alphaord(x) (int)x-65
#define chr(x) (char)x
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
const int mod = 1e9 + 7;
void fileio(string name) {
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}


int main() {

    int n;
    cin >> n;
    vector<string> c(n);
    for (int i = 0; i < n; i++ ) cin >> c[i];

    string ans = "";
    int i = 0;
    for (; i < n; i++ ){
        if(c[i] == "BLJTV1"){
            remove(c.begin(),c.end(), "BLJTV1");
            break;
        }
        ans += '1';
    }
    for (; i > 0; i--) ans += '4';
    for (; i < n; i++){
        ans += '1';
        if(c[i] == "BLJTV2") break;
    }
    for (; i > 0; i--) ans += '4';

    cout << ans;
    return 0;
}

