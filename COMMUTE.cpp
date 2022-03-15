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

		int x, l, f;
		int time = 0;
		for(int i = 0; i < n; i++){
			cin >> x >> l >> f;
			if(time < x){
				time = x;
			}
			else{
			    int y = 1;
			    if((time - x) % f == 0) y = 0;
				time = x + f * (((time - x) / f) + y);
			}

			time += l;
		}

		cout << time << endl;
	}
	return 0;
}