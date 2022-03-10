#include<iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string arr[n];
		int count = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		for(int i = 0; i < 10; i++){
			int curr = 0;
			for(int j = 0; j < n; j++){
				if(arr[j][i] == '1'){
					curr++;
				}
			}

			if(curr % 2 != 0) count++;
		}

		cout << count;
	}
	return 0;
}
