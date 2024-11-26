#include "bits/stdc++.h"
using namespace std;

string weekday[7] = {"水", "木", "金", "土", "日", "月", "火"};
int limit_of_day_of_the_months[12] = {31, 28, }

int main(){
    int day = 27;
    int month = 11;
    for(int i = 0; i < 20; i++){
        if(month == 11 && day > 30){
            month = 12;
            day = 1;
        }
        for(int j = 1; j <= 7; j++){
            cout << month << "/" << day << "(" << weekday[i%7] << ") " << j << "\n";
        }
        day++;
    }
    return 0;
}
