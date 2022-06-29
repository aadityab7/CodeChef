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
		int x, y, w , v;

		cin >> x >> y >> w >> v;

		if(x == w || y == v){
			cout << 2 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
	return 0;
}