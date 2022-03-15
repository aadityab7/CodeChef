#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		long mx = 0;
		long x, y, z;
        long profit, num;

		for(int i = 0; i < n; i++){
			cin >> x >> y >> z ;

			num = y / (x + 1);

			profit =  num * z;
			
			if(profit >= mx){
				mx = profit;
			}
		}

		cout << mx << endl;
	}
	return 0;
}