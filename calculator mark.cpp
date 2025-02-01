#include<iostream>
using namespace std;

main(){
	int marks;
	cout<<"Enter Your Marks :-";
	cin>>marks;
	
	if(marks >= 90){
		cout<<"Your Gread A+";
	}else if(marks >= 80){
		cout<<"Your Gread A";
	}else if(marks >= 70){
		cout<<"Your Gread B+";
	}else if(marks >= 60){
		cout<<"Your Gread B+";
	}else if(marks >= 50){
		cout<<"Your Gread C";
	}else if(marks >= 40){
		cout<<"Your Gread D";
	}else if(marks >= 30){
		cout<<"Your Are Faile";
	}else{
		cout<<"An Valide Marks";
	}
}
