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
		int x, y;
		cin >> x >> y;

		if(x > y){
			cout << x;
		}
		else{
			cout << y;
		}

		cout << endl;
	}
	return 0;
}