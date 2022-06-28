#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;

		long long a[n], b[n];

		for(long i = 0; i < n; i++){
			cin >> a[i];
		}

		for(long i = 0; i < n; i++){
			cin >> b[i];
		}

		sort(a, a + n);

		sort(b, b + n);

		long long max = 0;
		
		for(long i = 0; i < n; i++){
			if(a[i] + b[n - i - 1] > max){
				max = a[i] + b[n - i - 1];
			}
		}

		cout << max << endl;
	}
	return 0;
}