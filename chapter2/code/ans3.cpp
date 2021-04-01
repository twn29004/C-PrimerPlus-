#include<iostream>

using namespace std;

void showMsg1(void) {
    cout<<"Three bind mice"<<endl;
}

void showMsg2(void) {
    cout<<"See how they run"<<endl;
}

int main() {
    showMsg1();
    showMsg1();
    showMsg2();
    showMsg2();
    return 0;
}