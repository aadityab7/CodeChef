#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	        
	    int arr[n] = {};
	    long num;
	    for(int i = 0; i < n; i++){
	        cin >> num;
	        if(num <= n){
	            arr[num - 1] = 1; 
	        }
	    }
	   
	    
	    int ans = 0;
	    for(int i = 0; i < n; i++){
	        if(arr[i] != 1){
	            ans++;
	        }
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}
