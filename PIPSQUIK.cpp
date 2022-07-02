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
		int n;
		cin >> n;
		int h, y1, y2, l;
		cin >> h >> y1 >> y2 >> l;

		int type, x;

		int done = 0;
		int ans = 0;

		for(int i = 0; i < n; i++){
			cin >> type;
			cin >> x;

			if(!done){
				if(type == 1){
					// duck
					if(x < h - y1){
						if(l > 1){
							l--;
							ans++;
						}
						else{
							done = 1;
						}
					}
					else{
						ans++;
					}

				}
				else{
					// jump
					if(x > y2){
						if(l > 1){
							l--;
							ans++;
						}
						else{
							done = 1;
						}
					}
					else{
						ans++;
					}
				}
			}
			//end of for loop			
		}

		cout << ans << endl;

	}
	return 0;
}