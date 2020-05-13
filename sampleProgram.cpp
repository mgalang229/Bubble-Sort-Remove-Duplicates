#include <iostream>
using namespace std;

int main(){
	
	int n, temp, arr[100], arr2[100];
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	// BUBBLE SORT
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	// REMOVING DUPLICATES
	int j = 1;
	for(int i = 1; i <= n; i++){
		if(arr[i] != arr[i+1]){
			arr2[j] = arr[i];
			j++;
		}
	}

	for(int i = 1; i < j; i++){
		cout << arr2[i] << " ";
	}
	
	return 0;
}
