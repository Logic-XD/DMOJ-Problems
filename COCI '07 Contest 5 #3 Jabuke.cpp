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



int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	double x1,x2,x3,y1,y2,y3; int n; int cnt = 0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>n; double a = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    for(int i=0; i<n; i++){
        double x4,y4; cin>>x4>>y4;
        if((abs(x4*(y2-y3) + x2*(y3-y4) + x3*(y4-y2)) + abs(x1*(y4-y3) + x4*(y3-y1) + x3*(y1-y4)) + abs(x1*(y2-y4)+ x2*(y4-y1)+ x4*(y1-y2))) == 2*a) cnt++;
    }
    cout<<a<<nl<<cnt;

	return 0;
}
