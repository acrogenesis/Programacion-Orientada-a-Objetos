#include <iostream>
#include <string>
using namespace std;

class Fecha{
	protected:
		int dd;
		int mm;
		int aa;
	public:
		Fecha();
		Fecha(int d, int m, int a);
		int getdd();
		int getmm();
		int getaa();
		void setdd(int d);
		void setmm(int m);
		void setaa(int a);
		Fecha operator+(int d);
		bool operator>=(Fecha f);
		bool operator<=(Fecha f);
		bool operator>(Fecha f);
		bool operator<(Fecha f);
		bool operator==(Fecha f);
};
Fecha::Fecha(){
	dd = 1;
	mm = 1;
	aa = 2012;
}
Fecha::Fecha(int d, int m, int a){
	dd = d;
	mm = m;
	aa = a;
}
int Fecha::getdd(){
	return dd;
}
int Fecha::getmm(){
	return mm;
}
int Fecha::getaa(){
	return aa;
}
void Fecha::setdd(int d){
	dd = d;
}
void Fecha::setmm(int m){
	mm = m;
}
void Fecha::setaa(int a){
	aa = a;
}
Fecha Fecha::operator +(int d){
	Fecha temp;
	temp.dd = dd + d;
	temp.mm = mm;
	temp.aa = aa;
	if(temp.mm == 2){
		if(temp.dd > 28){
			temp.dd -= 28;
			temp.mm++;
		}
	}else if(temp.mm == 12){
		if(temp.dd > 31){
			temp.dd -= 31;
			temp.mm = 1;
			temp.aa++;
		}
	}else if((temp.mm == 1) or (temp.mm == 3) or (temp.mm == 5) or (temp.mm == 7) or (temp.mm == 8) or (temp.mm == 10)){
		if(temp.dd > 31){
			temp.dd -= 31;
			temp.mm++;
		}
	}else if((temp.mm == 4) or (temp.mm == 6) or (temp.mm == 9) or (temp.mm == 8) or (temp.mm == 11)){
		if(temp.dd > 30){
			temp.dd -= 30;
			temp.mm++;
		}
	}
	
	return temp;
}
bool Fecha::operator>=(Fecha f){
	Fecha temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.aa = aa;
	if(temp.aa == f.aa){
		if(temp.mm == f.mm){
			if(temp.dd == f.dd){
				return (temp.dd == f.dd);
			}else return (temp.dd > f.dd);
		}else return (temp.mm > f.mm);
	}else return (temp.aa > f.aa);
}
bool Fecha::operator<=(Fecha f){
	Fecha temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.aa = aa;
	if(temp.aa == f.aa){
		if(temp.mm == f.mm){
			if(temp.dd == f.dd){
				return (temp.dd == f.dd);
			}else return (temp.dd < f.dd);
		}else return (temp.mm < f.mm);
	}else return (temp.aa < f.aa);
}
bool Fecha::operator<(Fecha f){
	Fecha temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.aa = aa;
	if(temp.aa == f.aa){
		if(temp.mm == f.mm){
			return (temp.dd < f.dd);
		}else return (temp.mm < f.mm);
	}else return (temp.aa < f.aa);
}
bool Fecha::operator>(Fecha f){
	Fecha temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.aa = aa;
	if(temp.aa == f.aa){
		if(temp.mm == f.mm){
			return (temp.dd > f.dd);
		}else return (temp.mm > f.mm);
	}else return (temp.aa > f.aa);
}
bool Fecha::operator ==(Fecha f){
	Fecha temp;
	temp.dd = dd;
	temp.mm = mm;
	temp.aa = aa;
	return ((temp.dd == f.dd) & (temp.mm == f.mm) && (temp.aa == f.aa));
}