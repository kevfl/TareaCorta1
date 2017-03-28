#ifndef numberManager_h
#define numberManager_h

#include<math.h>
#include<vector>

namespace numberManager
{
	class numberManager
	{
		public:
			bool isPrime(int n);
			vector<int> product(vector<int>& vec, int multi, int tam);
			int sumProduct(vector<int>& vec);
	}
}



#endif // numberManager_h