#include <iostream>
using namespace std;

int main(){
	
	int n, arr[100], temp[100], TEMP;
	
	cout << "Enter n: ";
	cin >> n;
	
	cout << "Enter elements of array: " << endl;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			if(arr[i] > arr[j]){
				TEMP = arr[i];
				arr[i] = arr[j];
				arr[j] = TEMP;
			}
		}
	}
	cout << "\nBUBBLE SORT: " << endl;
	for(int i = 0;i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int j = 0;
	for(int i = 0; i < n-1; i++){
		if(arr[i] != arr[i+1]){
			temp[j] = arr[i];
			j++;
		}
	}
	cout << "\nLIST WITHOUT DUPLICATES: " << endl;
	temp[j] = arr[n-1];
	for(int i = 0; i < j; i++){
		cout << temp[i] << " ";
	}
	cout << temp[j] << endl;
	
	return 0;
}
