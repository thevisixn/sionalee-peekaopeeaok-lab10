#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i = 1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["<< i << "]: ";
		cin >> grade; 
		if(grade == '0') {
		    break;
		}else if(grade == 'A'){ // if grade is A
			count[0]++;
			i++;
		}else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++;
			i++;
		}else if(grade == 'C'){ // if grade is C
			//Do something
			count[2]++;
			i++;
		}else if(grade == 'D'){ // if grade is D
			//Do something
			count[3]++;
			i++;
		}else if(grade == 'F'){ // if grade is F
			//Do something
			count[4]++;
			i++;
		}else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}