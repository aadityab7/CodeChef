#include<iostream>
#include <bits/stdc++.h>;
#include <iomanip>
//#include <string>
// #include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;

		long arr[n];

		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		std::sort(arr, arr + n);

		
		long double sum = 0;
		for(long i = k; i < n - k; i++){
			sum = sum + arr[i];
		}

		long double avg = (long double)sum / (long double)(n - (2 * k));
		

		cout << fixed << setprecision(6) << avg << endl;
	}
	return 0;
}
