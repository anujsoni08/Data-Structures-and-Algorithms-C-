#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	cout<<"Enter the number of element"<<endl;
	int n;
	cin>>n;
	
	int arr[n];
	// input
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	// printing
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<"\n";
	
	int sum = 0;
	for(int i=0;i<n;i++){
		sum +=arr[i];
	}
	
	cout<<sum<<endl;
	
	return 0;
}
