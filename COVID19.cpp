#include<iostream>
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int mn = INT_MAX;
		int mx = -1;
		
		int num;
		int prev;
		int count = 1;
		cin >> prev;

		for(int i = 1; i < n; i++){
			cin >> num;
			if(num - prev <= 2){
				count++;
			}
			else{
				if(count < mn) mn = count;
				count = 1;
			}

			if(count > mx) mx = count;

			prev = num;
		}
		
		if(count < mn) mn = count;

		cout << mn << " " << mx << endl;
	}
	return 0;
}
