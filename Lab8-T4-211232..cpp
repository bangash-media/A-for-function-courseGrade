#include <iostream>
#include <string>
/*a function courseGrade. This function takes as a parameter
 an int value specifying the score for a course and returns 
 the grade, a value of type char, for the course.*/
using namespace std;

char course_grade(int marks); //function declaration

int main() 
{
	int marks;
	cout<<"\n\n\t\t\tSTUDENT GRADE CALCULATOR";
	cout<<"\n\n\n\t\tEnter your Obtained marks: "; cin>>marks;
	cout<<endl<<endl;
	cout<<"*******************************************************\n\n";
	cout<<"Obtained Grade= "<<course_grade(marks); //function call
	
	return 0;
}
char course_grade(int marks) //function defination
{

	char grade;
		if (marks>=90&&marks<=100)
 	{
 		cout<<"\t\tAcquired Grade= ";
	grade='A';
	 }
	 if(marks>=80&&marks<=89)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='A';
	 }
	 if(marks>=70&&marks<=79)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='B';
	 }
	 if(marks>=60&&marks<=69)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='B';
	 }
	 if(marks>=50&&marks<=59)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='C';
	 }
	 if(marks>=40&&marks<=49)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='D';
	 }
	 if(marks>=0&&marks<=40)
	 {
	 	cout<<"\t\tAcquired Grade= ";
	grade='F';
	 }
	 return grade;
		
}
