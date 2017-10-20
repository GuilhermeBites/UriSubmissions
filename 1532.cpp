#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,v;
	while(true){
		int a=0;
		cin >> n >> v;
		if(n==0 && v==0) break;
		while(v){
			int aux1=v, aux2 = v, cont =0;
			v--;
			while(aux1--){
				cont += aux2;
				if(aux1==0){
					aux2--;
					aux1=aux2;
				}
				if(cont == n) a=1;
			}
		}
		if(a==1){
			cout << "possivel\n";
		}else{
			cout << "impossivel\n";
		}
	}
	return 0;
}
