#include <iostream>
using namespace std;

typedef struct student
{
	int Sid;
	string section;
	float Marks;
} st;
//By using typedef we can replace **struct student** by  **St**

int main(){
//	struct student Tarun;
st Tarun;
st Manish;
st Jatin;
	Tarun.Sid=17;
	Tarun.section ="K22ZCo";
	Tarun.Marks=9.2;
	cout<<"Student ID = "<<Tarun.Sid<<endl;
	cout<<"Section = "<<Tarun.section<<endl;
	cout<<"MArks = "<<Tarun.Marks;
}
