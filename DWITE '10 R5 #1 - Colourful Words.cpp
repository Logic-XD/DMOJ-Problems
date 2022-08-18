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

string a, b, c;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	for(int _=0;_<5;_++){
        cin>>a>>b>>c;
        for(int i=0; i<b.size(); i++){
            for(int j=0; j<c.size(); j++){
                if(b[i]==c[j]) a = a.substr(0,i)+'_'+a.substr(i+1,a.size()-1);
                //else if(b[i]==c[i]) a = a.substr(0,i)+'_';
            }
        }
        cout<<a<<nl;
	}

	return 0;
}
