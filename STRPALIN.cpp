#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;

		std::vector<int> arr1, arr2;
		arr1.assign(26, 0);
		arr2.assign(26, 0);

		for(int i = 0; i < a.size(); i++){
			arr1[a[i] - 97]++;
		}

		for(int i = 0; i < b.size(); i++){
			arr2[b[i] - 97]++;
		}

		int flag = 0;
		for(int i = 0; i < 26; i++){
			if(arr1[i] != 0){
				if(arr2[i] != 0){
					flag = 1;
					break;
				}
			}
		}

		if(flag == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
