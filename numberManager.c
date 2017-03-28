
#include "numberManager.h"




using namespace numberManager;
using namespace std;

bool isPrime(int n){
	bool resp = false;
	if(n>2){
		int tam = static_cast<int>(floor(sqrt(n))+1);
		for(int div = 3; div <= tam; div++){
			if(n % div == 0){
				resp = true;
				break;
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

vector<int> product(vector<int>& vec, int multi, int tam){
    
    vector<int> resp;
    int i = 0;
	while(i < tam){
		resp.push_back(vec[i] * multi);
	}
    return resp;
}


int sumProduct(vector<int>& vec){
	int resp = 0;
	int i = 0;
	while(i < tam){
		resp = resp + vec[i];
	}
	return resp;
}


