#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

// n&1 == 0; n&7 ==0

int main(){

    int n;
    n = 7;
    double x, y;
    x = n;
    y = 1;

    double approx = 1e-8;

    while(x - y > approx){
        x = (x + y) / 2;
        y = n / x;
    }

    cout << x << endl;


    return 0;

}