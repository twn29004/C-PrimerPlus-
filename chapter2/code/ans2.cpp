#include<iostream>

using namespace std;

double chnage(const double& num) {
    return 220 * num;
}

int main() {
    double num;
    cin>>num;
    cout<<chnage(num)<<endl;
    return 0;
}