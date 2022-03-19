#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    int os = 0;
	    for(int i = 0; i < n; i++){
	        if(arr[i] % 2 == 0){
	            continue;
	        }
	        else{
	            os++;
	        }
	    }
	    
	    if(os % 2 == 0){
	        sort(arr, arr + n);
	        for(int i = n - 1; i >= 0; i--){
	           if(arr[i] % 2 != 0){
	               cout << arr[i] << ' ';
	           }
	        } 
	        
	        for(int i = n - 1; i >= 0; i--){
	            if(arr[i] % 2 == 0){
	                cout << arr[i] << ' ';
	            }
	        }
	        
	        cout << endl;
	    }   
	    else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}
