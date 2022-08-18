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

    int n; cin >> n; int maxx = -1000000; int maxy = -1000000; int minx = 1000000; int miny = 1000000;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(x > maxx) maxx = x;
        if(x < minx) minx = x;
        if(y > maxy) maxy = y;
        if(y < miny) miny = y;
    }
    int r = 2*(maxy - miny) + 2*(maxx - minx);
    cout << r;

    return 0;
}

