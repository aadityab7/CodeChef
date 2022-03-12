#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
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

		int curr;
		if(s == "mon") curr = 0;
		else if(s == "tues") curr = 1;
		else if(s == "wed") curr = 2;
		else if(s == "thurs") curr = 3;
		else if(s == "fri") curr = 4;
		else if(s == "sat") curr = 5;
		else if(s == "sun") curr = 6;

		int arr[7] = {0,0,0,0,0,0,0};
		for(int i = 0; i < n ;i++){
			arr[curr % 7]++;
			curr++;
		}

		for(int i = 0; i < 7; i++){
			cout << arr[i] << " " ;
		}
		cout << endl;
	}
	return 0;
}
