#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,position=0,menor;
	int *vet;

	cin >> n;

	vet = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++) cin >> vet[i];
	menor = vet[0];
	for(int i=0;i<n;i++){
		if(vet[i]<menor){
			menor = vet[i];
			position = i;
		}
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << position << endl;

	return 0;
}