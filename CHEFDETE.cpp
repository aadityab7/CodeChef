#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){

	int n;
	cin >> n;

	vector <int> arr;
	arr.assign(n + 1, 0);
    int num;
	for(int i = 0; i < n; i++){
		cin >> num;
		arr[num]++;
	}

	for(int i = 0; i < n + 1; i++){
		if(arr[i] == 0){
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}
