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
		int x, y;
		cin >> x >> y;

		int num1, num2;

		if(x % 9 == 0){
			num1 = x / 9;
		}
		else{
			num1 = (x / 9) + 1;
		}

		if(y % 9 == 0){
			num2 = y / 9;
		}
		else{
			num2 = (y / 9) + 1;
		}

		if(num1 < num2){
			cout << 0 << " " << num1 << endl;
		}
		else{
			cout << 1 << " " << num2 << endl;
		}
	}
	return 0;
}
