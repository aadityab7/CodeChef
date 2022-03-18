#include<iostream>
#include <bits/stdc++.h>;
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int p, s;
		cin >> p >> s;

		float b = sqrt(p * p * s * s + 8 * s) / 4.0;
		float a = (p - 4 * b) / 8.0;

		cout << a * b * a << endl;
	}
	return 0;
}