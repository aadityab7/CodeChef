#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	
	long long int n;
	cin >> n;

	if((n % 3 == 0) || ((n - 1) % 6 == 0)){
		cout << "yes" ;
	}
	else{
		cout << "no";
	}

	cout << endl;

	return 0;
}
