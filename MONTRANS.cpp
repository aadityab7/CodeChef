#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;

		int optimal_value = 0;
		int curr = a * 100 + b;
		int max = curr;
		int temp;

		for(int i = 1; i < 10000; i++){
			if(curr < c){
				break;
			}

			curr = curr - c;

			temp = curr % 100;
			curr = (curr / 100) + (temp * 100);

			if(curr > max){
				optimal_value = i;
				max = curr;
			}
		}

		cout << optimal_value << "\n";

	}
	return 0;
}