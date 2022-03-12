#include<iostream>
#include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int t1, d1, t2, d2;
		cin >> t1;

		int rt[t1];
		for(int i = 0; i < t1; i++){
			cin >> rt[i];
		}

		cin >> d1;

		int rd[d1];
		for(int i = 0; i < d1; i++){
			cin >> rd[i];
		}

		cin >> t2;

		int st[t2];
		for(int i = 0; i < t2; i++){
			cin >> st[i];
		}

		cin >> d2;

		int sd[d2];
		for(int i = 0; i < d2; i++){
			cin >> sd[i];
		}

		sort(rt, rt + t1);
		sort(rd, rd + d1);
		sort(st, st + t2);
		sort(sd, sd + d2);

		int flag = 0;
		for(int i = 0; i < t2; i++){
			flag = 0;
			for(int j = 0; j < t1; j++){
				if(rt[j] == st[i]){
					flag = 1;
					break;
				}
			}

			if(flag == 0){
				break;
			}
		}

		if(flag == 1){
			for(int i = 0; i < d2; i++){
				flag = 0;
				for(int j = 0; j < d1; j++){
					if(rd[j] == sd[i]){
						flag = 1;
						break;
					}
				}

				if(flag == 0){
					break;
				}
			}
		}
		
		if(flag == 0){
			cout << "no" << endl;
		}
		else{
			cout << "yes" << endl;
		}

	}
	return 0;
}
