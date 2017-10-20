#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i,fn=0;

	cin >> n;

	fn = n;

	for(i=1;i<n-1;i++){
		fn *= (n-i);
	}

	cout<<fn<<endl;


	return 0;
}