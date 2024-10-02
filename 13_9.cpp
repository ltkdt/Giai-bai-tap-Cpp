#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

int main(){


    int n; 
    n = 7;
    int f0 = 1;
    int f1 = 1;
    int fn = 1;
    int i;

    cout << "day fibonanci voi n = " << n << " la: " << endl;
 
    if (n <= 0) {
        cout << "Khong ton tai ";
    } else if (n == 1) {
        cout << f0 << " ";
    } 
    else if (n == 2) {
        cout << f0 << " " << f1 << endl;
    }
    else {
        cout << f0 << " " << f1 << " ";
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
            cout << fn << " ";
        }
    }

    cout << '\n';

    return 0;

}