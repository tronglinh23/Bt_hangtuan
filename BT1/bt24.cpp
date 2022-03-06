#include <iostream>
using namespace std;

int main(){
    int day, month, year, Daymax;
    cin >> day >> month >> year;
    switch(month){
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            Daymax = 30;
            break;
        case 2 :
            Daymax = 28 + ((year % 400 == 0 || (year % 4 == 0 && year & 100 != 0)) ? 1 : 0);
            break;
        default :
            Daymax = 31;
    }
    // Cong thuc Zeller
    year -= (14-month)/12;
    month += 12*((14-month)/12)-2;
    Daymax = (day + year + year/4 - year/100 + year/400 + (31*month)/12)%7;
     if(!Daymax)
    {
        cout<<"\nChu nhat";
    }
    else
    {
        cout<<"\nThu "<<Daymax+1;
    }
    cout<<endl;
    return 0;

}