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
		string a, b;
		cin >> a >> b;

		int f = 0;

		if(a.size() > b.size()){
			int i = 0, j = 0;

			while(i < b.size() && j < a.size()){
				if(b[i] == a[j]){
					i++;
					j++;
				}
				else{
					j++;
				}
			}

			if(i == b.size()){
				f = 1;
			}
		}
		else if(b.size() > a.size()){
			int i = 0, j = 0;

			while(i < a.size() && j < b.size()){
				if(a[i] == b[j]){
					i++;
					j++;
				}
				else{
					j++;
				}
			}

			if(i == a.size()){
				f = 1;
			}
		}
		else{
			if(a == b){
				f = 1;
			}
		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}