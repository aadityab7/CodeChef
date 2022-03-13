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

		int num;
		int up = 0;
		long long total = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 0){
				up++;
				total += 1100;
			}
			else{
				if(up != 0){
					total += 100;
				}
			}
		}

		cout << total << endl;
	}
	return 0;
}
