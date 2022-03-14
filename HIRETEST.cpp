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
		int n, m;
		cin >> n >> m;

		int x, y;
		cin >> x >> y;

		char c;
		for(int i = 0; i < n; i++){
			int n1 = 0, n2 = 0;

			for(int j = 0; j < m; j++){
				cin >> c;
				if(c == 'F'){
					n1++;
				}
				else if(c == 'P'){
					n2++;
				}
			}

			if(n1 >= x || (n1 >= x - 1 && n2 >= y)){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		
		cout << endl;
	}
	return 0;
}
