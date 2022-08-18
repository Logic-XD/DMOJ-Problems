#include <bits/stdc++.h>
using namespace std;
//-----------------------

int n; list<int> vec;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;

	if(n == 1){cout<<1<<endl; return 0;}
	else if(n <= 4){cout<<-1<<endl; return 0;}

	vec.push_back(4); vec.push_back(5);

	for(int i=1; i<=n; i++){
		if((i%2) && (i!=5)) vec.push_back(i);
		else if((i%2==0) && (i!=4)) vec.push_front(i);
	}

	//formatting sucks :(
	vector<int> ans;
	for(int x:vec) ans.push_back(x);
	for(int i=0; i<n-1; i++) cout<<ans[i]<<' ';
	cout<<ans[n-1]<<endl;

	return 0;
}
