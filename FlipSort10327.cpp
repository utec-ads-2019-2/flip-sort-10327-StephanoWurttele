#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int temp;
	int numero=0;
	vector<int> lista={0};
	while(cin>>n){
		if(n==EOF)
			break;
		lista.resize(n,0);
		for(int i=0;i<n;i++){
			cin>>lista[i];
		}
		while(!(is_sorted(lista.begin(),lista.end()))){
			for(int i=n-1;i>0;i--){
				if(lista[i]<lista[i-1]){
					temp=lista[i-1];
					lista[i-1]=lista[i];
					lista[i]=temp;
					numero++;
				}
			}

			for(int i=0;i<n-1;i++){
				if(lista[i]>lista[i+1]){
					temp=lista[i+1];
					lista[i+1]=lista[i];
					lista[i]=temp;
					numero++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<numero<<endl;
		numero=0;
	}
	return 0;
}
