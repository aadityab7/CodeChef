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
		int r, c;
		cin >> r >> c;

		char arr[r][c];

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				cin >> arr[i][j];
			}
		}

		int f = 0;
		string s;

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c - 4; j++){
				if(arr[i][j] == 's' || arr[i][j] == 'S'){
					s = "s";
					for(int k = 1; k < 5; k++){
						s += tolower(arr[i][j + k]);
					}
					if(s == "spoon"){
						f = 1;
						break;
					}
				}

				if(f == 1){
					break;
				}
			}
		}

		if(f == 0){
			for(int i = 0; i < c; i++){
				for(int j = 0; j < r - 4; j++){
					if(arr[j][i] == 's' || arr[j][i] == 'S'){
						s = "s";
						for(int k = 1; k < 5; k++){
							s += tolower(arr[j + k][i]);
						}
						if(s == "spoon"){
							f = 1;
							break;
						}
					}
				}
				if(f == 1){
					break;
				}
			}
		}

		if(f){
			cout << "There is a spoon!" << endl;
		}
		else{
			cout << "There is indeed no spoon!" << endl;
		}

	}
	return 0;
}