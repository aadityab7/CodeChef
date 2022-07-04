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

		if(n == 3){
			cout << -1;
		}
		else{

			cout <<"3 4 1 2 ";
			
			int i = 5;
			while(i <= n){
				cout << i << ' ';
				i++;
			}
		}

		cout << endl;
	}
	return 0;
}