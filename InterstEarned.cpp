#include <iostream>

/*
*   Calculates how much will be earned in interest
*/

using namespace std;

int main(){
float interest;
float balance;
int time;
bool btime;         //If false calculate in months.


cout << "What is your starting balance?" << endl;
cin >> balance;
cout << "What is your interest rate? (enter as a whole number)" << endl;
cin >> interest;
cout << "How many cycles?";
cin >> time;


for (int i = 0; i<time; i++){
    balance += (balance*interest);
}
cout << balance;

}