#include<iostream>
using namespace std;
// data for 1st student
class std1{
	float sub,tm;
	float marks[10];
	public: 
    void getp1();
	friend void compare();
}s1;

void std1::getp1()
{
	float per;
    cout<<"\n enter the marks of First student ";
	int i=0;
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>marks[i];
		tm+=marks[i];
	}
	
	per=(tm/500)*100;
	cout<<"Your percentage is : "<<per << endl;
}
// data for student 2


class std2{
	float sub,tm;
	float marks[10];
	public: 
    void getp2();
	friend void compare();
}s2;

void std2::getp2()
{
	float per;
	cout<<"\n enter the marks of the second student";
	int i=0;
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>marks[i];
		tm+=marks[i];
	}
	
	per=(tm/500)*100;
	cout<<"Your percentage is : "<<per <<endl;
}

// data for student 3


class std3{
	float sub,tm;
	float marks[10];
	public: 
    void getp3();
	friend void compare();
}s3;

void std3::getp3()
{
	float per;
	cout<<"\n enter the marks of the second student";
	int i=0;
	for(i=1;i<=5;i++)
	{
		cout<<"\n sub"<<i<<":";
		cin>>marks[i];
		tm+=marks[i];
	}
	
	per=(tm/500)*100;
	cout<<"Your percentage is : "<<per <<endl;
}

// compare function
void compare()
{
	if(s1.tm>s2.tm&&s1.tm>s3.tm)
	{
		cout<<"\n Student 1 passed !";
	}
    else if(s2.tm>s1.tm&&s2.tm>s3.tm)
	{
		cout<<"\n Student 2 passed !";
	}
	else if(s3.tm>s1.tm&&s3.tm>s2.tm)
	{
		cout<<"\n Student 3 passed ! ";
	}
}


	main(){
        	s1.getp1();
        	s2.getp2();
        	s3.getp3();
        	compare();
		}
       
