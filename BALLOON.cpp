#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int mx = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] <= 7){
				mx = i + 1;
			}
		}

		cout << mx << endl;
	}
	return 0;
}
