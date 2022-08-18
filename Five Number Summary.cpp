#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

    //inputs
	int N; vector<float> D; cin >> N;
	for(int i = 0; i < N; i++){
        float D_i; cin >> D_i; D.push_back(D_i);
	}
	//sort array
	sort(D.begin(), D.end());

	//declare, find max and min
	float mn = D[0]; float mx = D[N-1]; float Q1, Q2, Q3; vector<float> lo, hi; int i = 0;

	//find Q2, split into 2 subarrays
	for(; i < floor(N/2); i++) lo.push_back(D[i]);
	if(N%2){Q2 = D[i]; i++;} else Q2 = ((D[i-1]+D[i])/2);
	for(; i < N; i++) hi.push_back(D[i]);

    //find Q1 and Q3
    if(lo.size()%2) Q1 = lo[floor(lo.size()/2)];
    else Q1 = ((lo[lo.size()/2-1]+lo[lo.size()/2])/2);
    if(hi.size()%2) Q3 = hi[floor(hi.size()/2)];
    else Q3 = ((hi[hi.size()/2-1]+hi[hi.size()/2])/2);

    //output, round to 2 decimal places
    cout << setprecision(2) << fixed;
    cout << mn << ' ' << Q1 << ' ' << Q2 << ' ' << Q3 << ' ' << mx;

	return 0;
}
