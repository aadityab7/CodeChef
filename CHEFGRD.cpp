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
		int n, x , y;
		cin >> n >> x >> y;

		if((x + y) % 2 == 0){
			cout << 0 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
	return 0;
}