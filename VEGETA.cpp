#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int N = 1000001;

int prime_numbers[1000001] = {};

void fill_the_prime_array(){

	// prime_numbers[1] = 1;

	for(int i = 2; i < N; i++){
		
		//if it is a prime number i.e. NOT already marked
		if(prime_numbers[i] == 0){
			//start from the next multiple
			int j = i;

			while(j < N){
				//increment the number of prime_factors a number have
				prime_numbers[j]++;
				j += i;
			}
		}

	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	fill_the_prime_array();

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int m;
		cin >> m;

		int ans = 0;

		for(int i = n; i < m; i++){
			ans += prime_numbers[i];
		}

		cout << ans << "\n";

	}
	return 0;
}