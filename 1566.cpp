#include <bits/stdc++.h>
using namespace std;

int main(){
	int vet[3000000];
	int n=0,pn=0,i=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&pn);
		for(int k=0;k<pn;k++) scanf("%d",&vet[k]);
		sort(vet,vet+pn);
		for(i=0;i<pn-1;i++) printf("%d ",vet[i]);
		printf("%d",vet[pn-1]);
		printf("\n");
	}
	return 0;
}
