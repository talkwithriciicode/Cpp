#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// DEFREFERENCING
	
	int score = 90;
	
	int* pScore = &score;
	
	cout<<"\n --- Dereferencing --- "<<endl;
	
	cout<<"Before: Score"<< score << endl;
	
	//derefencing  means accessing the value
	// at the memory address stored in the pointer
	cout<<"*pScore = "<< *pScore << endl;
	
	//we can also modify the original variable 
	// by dereferencing the pointer 
	*pScore = 95;
	
	cout<<"After: Score"<< score << endl;
	


    return 0;
}

