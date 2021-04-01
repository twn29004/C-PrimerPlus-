#include<iostream>

using namespace std;

void showTime(int hour, int minute) {
    cout<<"Time: ";
    cout<<hour<<":"<<minute<<endl;
}

int main() {
    int hour, minute;
    cout<<"Enter the number of hours: ";
    cin>>hour;
    cout<<"Enter the number of minute: ";
    cin>>minute;
    showTime(hour, minute);
    return 0;
}