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

		string a, b;
		cin >> a >> b;

		long arr[26] = {};

		for(int i = 0; i < a.size(); i++){
			arr[a[i] - 97]++;
		}

		for(int i = 0; i < b.size(); i++){
			arr[b[i] - 97]++;
		}
        
		int n;
		cin >> n;

		string s;
		int f = 1;

		for(int i = 0; i < n; i++){
			cin >> s;

			if(f){
				for(int j = 0; j < s.size(); j++){
					arr[s[j] - 97]--;
					if(arr[s[j] - 97] < 0){
						f = 0;
						break;
					}
				}
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