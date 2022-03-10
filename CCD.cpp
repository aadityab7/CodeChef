#include<iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , q;
		cin >> n >> q;

		string x, y;
		cin >> x >> y;

		while(q--){
		    string a = x;
		    string b = y;
		    
			int l , r;
			cin >> l >> r;
			int i;

			for(i = l - 1; i < r - 1; i++){
				int num;
				if(b[i] >= a[i]){
					num = b[i] - a[i];	
				}
				else{
					num = a[i] - b[i] + 26;
				}
				
				if(i % 2 == 0){
					sum += num;
				}
				else{
					sum -= num;
				}
			}
			

			if(sum == 0){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
