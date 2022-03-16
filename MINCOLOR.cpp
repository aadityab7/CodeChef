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
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		x1--;
		y1--;
		x2--;
		y2--;

		int same = 0;
		if((x1 + y1) % 2 == (x2 + y2) % 2){
			same = 1;
		}


		int arr[n][m];

		int c1 = 2, c2 = 1;
		if((x1 + y1) % 2 == 0){
			c1 = 1;
			c2 = 2;
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if((i + j) % 2 == 0){
					arr[i][j] = c1;
				}
				else{
					arr[i][j] = c2;
				}
			}
		}
		

		if(same){
			arr[x2][y2] = 2;
			if(x2 > 0) arr[x2 - 1][y2] = 3;
			if(y2 > 0) arr[x2][y2 - 1] = 3;
			if(x2 < n - 1) arr[x2 + 1][y2] = 3;
			if(y2 < m - 1) arr[x2][y2 + 1] = 3;
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

	}
	return 0;
}