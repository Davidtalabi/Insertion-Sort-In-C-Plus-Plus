//INSERTION SORT IN C++ CREATED BY DAVID TALABI ON 1-24-2019

#include <iostream>
using namespace std;

void insertionsort(int A[], int n)
{
int value,hole,i;
 for(int i=1; i<n; i++)
 {
     value = A[i];
     hole = i;
     
     while(hole > 0 && A[hole-1] > value)
     {
         A[hole] = A[hole-1];
         hole = hole -1;
     }
     A[hole] = value;
 }
}

void displayarray(int A[], int n) //function to display array elements, will be recursively called in main function
{
	for(int i=0; i<n; i++)
		cout << A[i] << ";"; //displaying the array, the semi colons are so that it shows a semi colon after every number that is printed
}


int main() //Main function where we recursively call the functions made earlier so that we have an output and the user also inputs the array size and elements
{

int n; //Array size	
cout << "Enter Array Size!" << endl;
cin >> n; //User inputs array size
int A[n]; //Initializing array with n elements that user inputs

cout << "Enter Array Elements!" << endl;
for(int i=0; i<n; i++)
	cin >> A[i]; //user inputs array elements

	insertionsort(A,n); //recursively calling insertion function made earlier to sort the array
	
	cout << "Sorted Array Is: " << endl;
	displayarray(A,n); //recursively calling display array function to display the final sorted array
	
return 0;
}
