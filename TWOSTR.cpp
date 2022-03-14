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
		string x , y;
		cin >> x >> y;

		int count = 0;

		for(int i = 0; i < x.size(); i++){
			if(x[i] == '?' || y[i] == '?'){
				count ++;
			}
			else if(x[i] == y[i]){
				count ++;
			}
			else{
				break;
			}
		}

		if(count == x.size()){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
