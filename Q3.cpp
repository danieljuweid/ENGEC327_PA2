#include <iostream>
using namespace std;

/* Since we cannot have a header file for this question, I am defining the function prototypes before the main 
function (apologies if this may be syntactically unorganized) */
int* ReverseAdd(int*, int);
int* ReverseMultiply(int*, int);

int main()
{
	int sizeinput;
	cout << "Enter the number of entries: " <<endl;
    cin >> sizeinput;

	int *array = new int[sizeinput];

	for(int i = 0; i < sizeinput; i++){
		cout << "Entry " << i << " is: ";
        cin >> array[i];
	}  //we have a  dynamic array

	//printing the original array:
	cout << "*****" << endl;
	cout << "Original array is: " <<endl; 
	for(int i = 0; i < (sizeinput); i++){
		cout << array[i] << " ";
	}
	
    cout << "and the address of the zero element is: " << &array[0] << endl;

	array = ReverseAdd(array, sizeinput);
	cout << "Two array is: ";
	for(int i = 0; i < (sizeinput*2-1); i++){
		cout << array[i] << " ";
	}
	cout << "and the address of the zero element is: " << &array[0] << endl;

	array = ReverseMultiply(array, sizeinput);
	cout << "One array is: ";
	for(int i = 0; i < (sizeinput*2+1); i++){
		cout << array[i] << " ";
	}
	cout << "and the address of the zero element is: " << &array[0] << endl;

	return 0;
}


int *ReverseMultiply(int *array, int size){

	int *array2 = new int[size*2 + 1]; 

	for(int i = 0; i < size; i++){
		array2[i] = array[i];
	}

	
	for(int i = size; i < (size*2); i++){
		array2[i] = array[(size*2)-(i+1)]; 
	}

	int mul = 1;
	for(int i = 0; i < (size*2); i++){
		mul *= array2[i];

	}

	array2[(size*2+1)-1] = mul; 


	return array2;
}

int* ReverseAdd(int *array, int size){

	int *array2 = new int[size*2 - 1]; 


	for(int i = 0; i < size; i++){
		array2[i] = array[i];
	}

	for(int i = size; i < (size*2 - 1); i++){
		array2[i] = (array[((size*2)-1) - i] + array[((size*2)-1) - (i+1)]);
	}

	return array2;

}