#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;

		int balance = 0;
		int mx = 0;

		for(int i = 0; i < n.size(); i++){
			if(n[i] == '('){
				balance++;
			}
			else{
				balance--;
			}

			if(balance > mx){
				mx = balance;
			}
		}

		for(int i = 0; i < mx; i++){
			cout << '(';
		}
		for(int i = 0; i < mx; i++){
			cout << ')';
		}

		cout << endl;
	}
	return 0;
}
