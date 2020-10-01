#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int length(char input[]){
	int count = 0;
	for(int i=0;input[i]!= '\0';i++){
		count++;
	}
	return count;
}


void reverse(char input[]){
	int start = 0;
	int end = length(input) - 1;
	while(start<=end){
		swap(input[start],input[end]);
		start++;
		end--;
	}
}

bool compareString(char arr1[],char arr2[]){

    if(strlen(arr1) != strlen(arr2)) return false;	
	for(int i=0;i<strlen(arr1);i++){
		if(arr1[i] != arr2[i]){
			return false;
		}
	}	
	return true;
}

int main(){
	
//	char name[100];
//	cout<<"Enter the name of element ";
//	cin.getline(name,100);
	
//	reverse(name);
	
//	cout<<name<<endl;

    char arr1[100],arr2[100];
    cin>>arr1>>arr2;
    bool result = compareString(arr1,arr2);
    if(result){
    	cout<<"both strings are equal"<<endl;
	}
	else{
		cout<<"strings are not equal"<<endl;
	}
	
	return 0;
}
