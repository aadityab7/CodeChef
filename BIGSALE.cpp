#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
#include <iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		double p, q, x, y;
		double loss = 0;

		for(int i = 0; i < n; i++){
			cin >> p >> q >> x;
			y = p + ((p * x) / 100.00);

			double num = ((p - y) * x / 100.00) * q;
			
			if(num < 0) num = -num;
			loss += num;
		}

		cout << fixed << setprecision(6) << loss << endl;
	}
	return 0;
}
