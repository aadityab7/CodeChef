#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, m;
		cin >> l >> m;

		int count = 0;

		std::vector<int> soints;
		soints.assign(100, 0);
		vector <int> sofloat;
		sofloat.assign(100, 0);

		int p, lev;

		for(int i = 0; i < l; i++){
			cin >> p >> lev;
			soints[lev - 1] += p;
		}

		for(int i = 0;i < m; i++){
			cin >> p >> lev;
			sofloat[lev - 1] += p;
		}

		for(int i = 0; i < 100; i++){
			if(soints[i] < sofloat[i]){
				count += sofloat[i] - soints[i];
			}
		}

		cout << count << endl;
	}
	return 0;
}