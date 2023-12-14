//#include<iostream>
//#include<fstream>
//#include<stdlib.h>
//
//using namespace std;
//
//	class emp
//	{
//		char name[20];
//		int id;
//		float salary;
//		
//	   public:
//		void accept()
//		{
//			cin>>name>>id>>salary;
//		}
//	
//		void display()
//		{
//			cout<<"\n"<<name<<"\t"<<id<<"\t"<<salary;
//	
//		}
//	};
//
//
//int main()
//{
//	emp e[3];
//	fstream f;
//	int i,n;
//	
//	//f.open("D:\\inputfile.txt");
//
////	f.open("D:\\inputfile.txt",ios::in);
//	f.open("D:\\hello.txt",ios::in);
//	for(i=0;i<n;i++)
//	{
//		f.read((char*) &e[i],sizeof(e[i]));
//		e[i].display();
//	}
//	
//	cout<<"\n how many records you want to insert: ";
//	cin>>n;
//	
//	cout<<"\n enter name,emp_id,salary: ";
//	
//	for(i=0;i<n;i++)
//	{
//		cout<<"\n enter information of employee "<<i+1<<" ";
//		e[i].accept();
//		f.write((char*) &e[i],sizeof(e[i]));
//	}
//	f.close();
//	
//	f.open("D:\\hello.txt",ios::out);
//	
//	cout<<"\n employee information is as follows: ";
//	
//	for(i=0;i<n;i++)
//	{
//		f.read((char*) &e[i],sizeof(e[i]));
//		e[i].display();
//	}
//	f.close();
//	return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    char Name[20];
    int ID;
    double salary;
    public:
        void accept()
        {
            cin>>Name;
            cin>>ID;
            cin>>salary;
        }
        void display()
        {
            cout<<"\n Enter Name:"<<Name;
            cout<<"\n Enter Id:"<<ID;
            cout<<"\n Enter Salary:"<<salary;
        }
};
       
int main()
{
    Employee o[5];
    fstream f;
    int i,n;
   
    f.open("D:\\hello.txt");
    cout<<"\n How many employee information do you need to store?";
    cin>>n;
    cout<<"\n Enter information of employee in this format(NAME/ID/SALARY)";
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter information of:"<<i<<"\n Employee";
        o[i].accept();
        f.write((char*)&o[i],sizeof o[i]);
    }
   
    f.close();
   
    f.open("D:\\hello.txt",ios::in);
    cout<<"\n Information of Employees is as follows:";
    for(i=0;i<n;i++)
    {
        f.write((char*)&o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();
   
    return 0;
}
