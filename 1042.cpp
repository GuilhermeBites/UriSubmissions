#include <bits/stdc++.h>

using namespace std;

int main(){
	int vet[3],aux[3],
		i=0,j=0,aux2=0;

	cin >> vet[0] >> vet[1] >> vet[2];
	for(i=0;i<3;i++){
		aux[i] = vet[i];
	}

	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(vet[i]>vet[j]){
				aux2 = vet[i];
				vet[i] = vet[j];
				vet[j] = aux2;
			}
		}
	}

	for(i=0;i<3;i++){
		printf("%d\n",vet[i]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("%d\n",aux[i]);
	}


	return 0;

}