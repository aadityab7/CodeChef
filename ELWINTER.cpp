#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long n, m, q;
	cin >> n >> m >> q;

	int arr[n] = {};
	int mat[n][n] = {};

	long u, v;
	for(long i = 0; i < m; i++){
		cin >> u;
		cin >> v;

		mat[u - 1][v - 1] = 1;
		mat[v - 1][u - 1] = 1;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}

	int type;
	long long x;

	for(long i = 0; i < q; i++){
		cin >> type;
		cin >> x;
		
		if(type == 1){
			arr[x - 1] = 1;
		}
		else if(type == 3){
			if(arr[x - 1] == 1){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			while(x--){
				for(long j = 0; j < n; j++){
					if(arr[j] == 1){
						for(int k = 0; k < n; k++){
							if(mat[j][k] == 1){
								arr[k] = 1;
							}
						}
					}
				}
			}	
		}
	}

	return 0;
}