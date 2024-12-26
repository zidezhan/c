#include<iostream> 
using namespace std;

class myTime{
	private:
		int hour;
		int minute;
		bool validTime(int h, int m);
	public:
		bool setTime(int h,int m);
		int getHour(){return hour;}
		int getMinute(){return minute;}
		void printTime();
};

bool myTime::validTime(int h,int m){
	if(valiTime(h,m)){
		hour = h;
		minute = m;
		return true;
	}
	else  return false;
}
void myTime::printTime(){
	cont<<hour<<":"<<minute<<"\n";
}
