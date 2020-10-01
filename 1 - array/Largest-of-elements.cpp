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
	
	int largest_element = INT_MIN;
	int smallest_element = INT_MAX;
	for(int i=0;i<n;i++){
		if(largest_element < arr[i])
		largest_element = arr[i];
		
		if(smallest_element > arr[i])
		smallest_element = arr[i];
	}
	
	cout<<"largest_element "<<largest_element<<endl;
	cout<<"smallest_element "<<smallest_element<<endl;
	
	swap(largest_element,smallest_element);
	
	cout<<"largest_element "<<largest_element<<endl;
	cout<<"smallest_element "<<smallest_element<<endl;
	
	return 0;
}
