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
		string s;
		cin >> s;

        int i = 0;
		while(i < s.size() && s[i] == 'C'){
				i++;
		}

		while(i < s.size() && s[i] == 'E'){
			i++;
		}

		while(i < s.size() && s[i] == 'S'){
			i++;
		}

		if(i == s.size()){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}