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
		int n;
		cin >> n;

		int gas;
		int num;
		cin >> gas;
		int dist = 0;

		for(int i = 1; i < n; i++){
			cin >> num;
			if(gas > 0){
			    dist++;
				gas += num;
				gas--;
			}
		}
    
        dist += gas;
		cout << dist << endl;
	}
	return 0;
}