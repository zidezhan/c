#include<iostream>
using namespace std;

class myTime{
	pubic:
		int hore;
		int minute;
		void prinTime();
};
void  mytime::prinTime(){
	cout<<hour<<":"<<minute<<"\n";
}
int main(){
mytime now, open;
now.hour = 8;
now.minute = 18;
cout<<"現在時間:";
now.prinTime();
open.hour = 9;
open.minute = 10
cout<<"開發時間:";
open.prinTime();
}
