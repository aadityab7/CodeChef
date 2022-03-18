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

		string s;
		cin >> s;
        float total = 0;
		int f = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				total ++;
			}

			if(total >= (float)(i + 1) / 2){
				f = 1;
				break;
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