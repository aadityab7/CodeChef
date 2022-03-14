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
		int x, y, k, n;
		cin >> x >> y >> k >> n;

		int f = 0;
		int num = x - y;
		if(num <= 0) f = 1;

		int c, p;
		for(int i = 0; i < n; i++){
			cin >> p >> c;
			if(p >= num && c <= k){
				f = 1;
			}
		}

		if(f){
			cout << "LuckyChef" << endl ;
		} 
		else{
			cout << "UnluckyChef" << endl ;
		}
	}
	return 0;
}
