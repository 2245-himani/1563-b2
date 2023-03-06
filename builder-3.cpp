#include<iostream>
#include<string.h>
using namespace std;
class high_school
{
	private:
		int id;
		char name[100];
		int roll;
		int std;
		int age;
		int cont;
		static char stu_adu_ins[100];
		char add[100];
		
		public:
			void setData()
			{
				id=1;
				strcpy(name,"gnfrdtf");
				roll=4;
				std=12;
				age=17;
				cont=9876543215;
				strcpy(add,"tfvg");
				
				cout<<"ID:-"<<id<<endl<<"Student name:-"<<name<<endl<<"roll no:-"<<roll<<endl<<"Std:-"<<std<<endl<<"Age:-"<<age<<endl<<"cont:-"<<cont<<endl<<"stu adu ins:-"<<stu_adu_ins<<endl<<"Address:-"<<add<<endl;
							
			}
};
class clg
{
	private:
		int id;
		char name[100];
		int roll;
		int std;
		int age;
		int cont;
		static char stu_adu_ins[100];
		char add[100];
		public:
			void setData()
			{
				id=2;
				strcpy(name,"himani");
				roll=3;
				age=16;
				std=11;
				cont=5698765435;
				strcpy(add,"hgtf");
				cout<<"ID:-"<<id<<endl<<"Student name:-"<<name<<endl<<"roll no:-"<<roll<<endl<<"Std:-"<<std<<endl<<"Age:-"<<age<<endl<<"cont:-"<<cont<<endl<<"stu adu ins:-"<<stu_adu_ins<<endl<<"Address:-"<<add<<endl;
			}
};
char high_school ::stu_adu_ins[100]="gfdryf";
char clg::stu_adu_ins[100]="yhfrd";


int main()
{
	high_school h1;
	clg c1;
	
	h1.setData();
	c1.setData();	
}
