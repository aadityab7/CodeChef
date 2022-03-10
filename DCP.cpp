#include<iostream>
#include <vector>
using namespace std;

int main(){
	    long  MOD = 1000000000 + 7;
	    
		long n, m;
		cin >> n >> m;

		std::vector<std::vector<int>> eq;
		long arr[n];

		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		int numb = 0;

		while(numb++ < m){
			long d, x;
			cin >> d >> x;
			eq.push_back({d,x});

			while(x--){
				long w, c;
				cin >> w >> c;

				eq[numb].push_back(w);
				eq[numb].push_back(c);
			}
		}

		// sort(eq);

		std::vector<long> temp;
		for(int i = 0; i < eq.size(); i++){
			long mn = i;
			for(int j = i + 1; j < eq.size(); j++){
				if(eq[j][0] < eq[mn][0]){
					mn = j;
				}
			}

			if(mn != i){
				temp = eq[i];
				eq[i] = eq[mn];
				eq[mn] = temp;
			}
		}

		for(int i = 0; i < eq.size(); i++){
			long d = eq[i][0];
			long x = eq[i][1];

			long number = 2;
			while(x--){
				long w = eq[i][number++];
				long c = eq[i][number++];

				arr[c - 1] = w * arr[d - 1];
			}

			arr[d - 1] = 0;
		}

		for(long i = 0; i < n; i++){
			cout << (arr[i] % MOD) << endl;
		}
	
	return 0;
}
