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
		long long l, d, s, c;
		cin >> l >> d >> s >> c;

// 		long double num = l;
// 		long double div = c + 1;
// 		long long i = 0;
// 		while(s >= num && i < d){
// 			num /= div; 
// 			i++;
// 		}

		long double num = (long double)l / (long double)pow(c + 1, d - 1);

		if(s >= num){
			cout << "ALIVE AND KICKING" << endl;
		}
		else{
			cout << "DEAD AND ROTTING" << endl;
		}
	}
	return 0;
}