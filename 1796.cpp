#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,cont1=0,cont0=0,x;
 	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x==1) cont1++;
		else cont0++;
	}

	if(cont0 > cont1){
		cout << "Y\n";
	}else{
		cout << "N\n";
	}

	return 0;
}
