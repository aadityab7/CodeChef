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

		cout << 3;
		if(n > 0){
			cout << '.';
			int num = 103993 % 33102;
			for(int i = 0; i < n; i++){
				num = num * 10;
				int d = num / 33102;
				cout << d;
				num = num % 33102;
			}
		}

		cout << endl;
	}
	return 0;
}