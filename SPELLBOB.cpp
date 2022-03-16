#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string top, bot;
		cin >> top >> bot;

		int f, bs = 0, os = 0;
		for(int i = 0; i < 3; i++){
			f = 0;
			if(top[i] == 'o' || bot[i] == 'o'){
				f = 1;
				os++;
			}
			if(top[i] == 'b' || bot[i] == 'b'){
				f = 1;
				bs++;
			}

			if(f == 0){
				break;
			}
		}

		if(bs < 2 || os < 1) f = 0;

		if(f == 0){
			cout << "no" << endl;
		}
		else{
			cout << "yes" << endl;
		}
	}
	return 0;
}