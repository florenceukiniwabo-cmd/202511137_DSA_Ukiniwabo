#include<iostream>
using namespace std;




int studentResult(int fM,int sM,int tM){
int total=fM+sM+tM;
float average=total/3;

cout<<"\t\tOperating system:"<<fM<<endl;
	cout<<"\t\tData Structure and Algorithms:"<<sM<<endl;
	
	cout<<"\t\tProgramming in C++:"<<tM<<endl;
	cout<<"\n\t\t---------------------------------\n: "<<endl;
	cout<<"\t\ttotal:"<<total<<endl;
	cout<<"\t\taverage:"<<average<<endl;
	// display Pass or fail
		if(average>=50){
			cout<<"\t\tyou have passed"<<endl;
			
		}

		else{
			cout<<"\t\tyou have failed"<<endl;
		
		}
		return 0;


	}

    
	int main(){
		
	string studentNames[10];
	int fM,sM,tM;
	for(int i=0; i<10; i++){
	
        cout << "\n\t\t        STUDENT RESULT MANAGEMENT SYSTEM         ";
        cout << "\n\t\t=================================================\n";
        	
// user to enter name' 
cout<<"\n\t\tEnter Student Name:";
cin>>studentNames[i];


//user to enter first marks
cout<<"\t\tEnter Marks of Operating system:";
cin>>fM;

// user to enter second marks
cout<<"\t\tEnter Marks Of Data Structure and Algorithm:";
cin>>sM;

//user to enter third marks
cout<<"\t\tEnter Marks Of Programming in C++:";
cin>>tM;
// user to enter student Result

cout << "\n\t\t================ Resut For:=================\n";


int	result= studentResult( fM, sM, tM);


}
    
		
		return 0;
	}
	
	
