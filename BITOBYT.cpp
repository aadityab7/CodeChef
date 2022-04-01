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
		int x = 0, y = 0, z = 0;

		int numb = (n / 26) + 1;

		int x = n % 26;
		if(x < 2){
			x = numb;
		}
		else if(x < 10){
			y = numb;
		}
		else{
			z = numb;
		}


		cout << x << ' ' << y << ' ' << z;
	}
	return 0;
}