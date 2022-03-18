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
		int n;
		cin >> n;

		int num = n - ((n + 1) / 2);

		cout << 1 << ' ';
		cout << 1;
		for(int i = 0; i < num; i++){
			cout << 0;
		}
		cout << endl;
	}
	return 0;
}