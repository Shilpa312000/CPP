#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Student{
	public:int rollno;
			char name[50], city[50];
			
			void accept(int rollno,char * name,char* city){
				this->rollno=rollno;
				strcpy(this->name,name);
				strcpy(this->city,city);
				cout<<"---------student created----------"<<endl;
			}
			void display(){
				cout<<"Rollno  "<<rollno<<"Name  "<<name<<"City  "<<city<<endl;
			}
};
void WriteStudent(string filename,Student &stud){
	
	fstream writeStud(filename,ios::out|ios::binary);
	writeStud.write((char*)&stud,sizeof(Student));
	cout<<"-----------Data written in file--------------"<<endl;
	writeStud.close();
}
void ReadStudent(string filename){
	Student s;
	fstream readStud(filename,ios::in|ios::binary);
	readStud.read((char*)&s,sizeof(Student));
	s.display();
	readStud.close();
}
//void readFile()
// {
// 	ifstream input("info.txt");
// 	string data;
// 	while(getline(input,data))
// 	{
// 		cout<<data<<endl;
//	 }
// 	
// }
 int  main(){
 	cout<<"1.create Student  2.Display Student 3.exit"<<endl;
 	int ch;
 	int rollno;
 	string filename;
 	char name[50];
	char city[50];
 	Student s1,s2;
 	do{
 		cout<<"Enter choice:"<<endl;
 		cin>>ch;
 		switch(ch){
 			case 1:
 				cout<<"Rollno Name City";
 				cin>>rollno>>name>>city;
 				s1.accept(rollno,name,city);
 				break;
 				
 			case 2:
 				s1.display();
 				break;
 				
 			case 3:
 				cout<<"Enter the filename:";
 				cin>>filename;
 				WriteStudent(filename,s1);
 				break;
 				
 			case 4:
 				cout<<"Enter the filename:";
 				cin>>filename;
 				cout<<"Get student detials.";
 				ReadStudent(filename);
 				break;
 				
 		
		 }
	 }
	 while(ch!=4);
 }
