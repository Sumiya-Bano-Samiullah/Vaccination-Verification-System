#include<iostream>
#include<conio.h>
using namespace std;

int count=0; //global variable
int fine=0; //global variable

void finedper(char x){ //fine collection
	if(x=='n'|| x=='N'){
	cout<<x;
    fine+=200;
    }
}

void vacinnedper(char x){ //no fine collection
	if(x=='v'||x=='V'){
	cout<<x;
    }
}

void print(){ //total count and fine printing
	cout<<"\nTotal no of persons passed are:"<<count<<endl;
	cout<<"Total fine collected is:"<<fine<<endl;
}

void esc(char x){ //esc loop function
	while(int(x)!=27){
		count++;
		finedper(x); //calling finedper function
		vacinnedper(x);	//calling vacinnedper function
		cout<<"\nEnter v for vaccinated n for n vaccinated and esc to exit:";
    	x=getch();
		}
	print();
}

int main(){
	char x;
	cout<<"Enter v for vaccinated n for n vaccinated and esc to exit:";
	x=getch(); //taking char input without pressing enter
	esc(x); //calling esc function
	return 0;
}
