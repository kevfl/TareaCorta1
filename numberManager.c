
#include "numberManager.h"
#include<math.h>


using namespace numberManager;
using namespace std;

bool isPrime(int n){
	bool resp = false;
	if(n>2){
		int tam = static_cast<int>(floor(sqrt(n))+1);
		for(int div = 3;div<=tam;div++, tam--){
			if(n % div == 0){
				resp = true;
				break;
			}else{
				if(n % tam == 0){
					resp = true;
					break;
				}
			}
			
		}
	}
	else{
		if(n>0)){
			resp = true;
		}
	}
	return resp;
}

int[] product(int vec[], int multi, int tam){
	int resp[];
	int i = 0;
	while(i<tam){
		resp[i]=vec[i]*multi;
	}
	return resp;
}


