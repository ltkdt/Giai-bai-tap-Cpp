#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

// n&1 == 0; n&7 ==0

int main(){

    uint a,b,c,d;
    cin >> a >> b >> c >> d;

    double x, y;
    double approx = 1e-8;

    int num = (a * 1000) + (b * 100) + (c * 10) + d;
    if ( !(num > 999 && num < 10000) ){
        cout << num << endl;
        cout << "Nhap input ko hop le" << endl;
    }
    else{
        x = num;
        y = 1;
        while (x - y > approx){
            x = (x + y) / 2;
            y = num / x;
        }

        cout << x << endl;
    }

}