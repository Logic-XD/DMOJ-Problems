#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

    double H, X, leg1, leg2; cin >> H >> X; //input, declare
    if(X >= 90) cout << -1; //impossible case

    else{ //H = leg1/sin(X) = leg2/sin(90-X)
        double X2 = 90 - X; //other angle
        X *= (3.14159265359/180.00000000000); X2 *= (3.14159265359/180.00000000000); //convert to radians
        leg1 = H*sin(X); leg2 = H*sin(X2); //sin law
        cout << setprecision(9) << fixed; //round
        cout << min(leg1, leg2) << ' ' << max(leg1, leg2) << '\n'; //output
    }

	return 0;
}
