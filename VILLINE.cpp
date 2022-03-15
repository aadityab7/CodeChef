#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n;
	cin >> n;
	int m , c;
	cin >> m >> c;

	int v1 = 0, v2 = 0;
	int x, y, p;
	for(int i = 0; i < n; i++){
		cin >> x >> y >> p;
		if(y > (m * x) + c){
			v2 += p;
		}
		else{
			v1 += p;
		}
	}

	if(v2 > v1){
		cout << v2;
	}
	else{
		cout << v1;
	}

	return 0;
}