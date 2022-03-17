#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int arr[n] = {};
	
	string s;
	
	int total = 0;

	while(k--){
		getline(cin, s);
		
		while(s.length() == 0)
		    getline(cin, s);
		    
		string ch = s.substr(6, s.size() - 6);

		if(ch == "LL"){
			if(total > 0){
				for(int i = 0; i < n; i++)
				    arr[i] = 0;
				total = 0;
			}
		} 
		else{
			int num = stoi(ch);
			if(arr[num - 1] == 0){
				total++;
				arr[num - 1] = 1;
			}
			else{
				arr[num - 1] = 0;
				total--;
			}
		}

		cout << total << endl;
	}
	
	return 0;
}