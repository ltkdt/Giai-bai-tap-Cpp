#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

int main(){


    int n; 
    int f0 = 1;
    int f1 = 1;
    int fn = 1;
    int cnt = 3;

    cin >> n;

    if (n < 0){
        cout << "Day ko the la 1 so fibonanci" << endl; 
    }
    if (n == 1){
        cout << "Day co the la so dau tien hoac thu hai cua fibonanci" << endl;
    }
    else{
        while( 1 ){
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
            
            if (fn == n){
                cout << "Day la so thu " << cnt << " cua day fibonanci" << endl;
                break;
            }
            else if (fn > n ){
                cout << "Day ko phai 1 so cua day fibonanci" << endl;
                break;
            }
            else{
                cnt++;
            }
        }
    }

    return 0;

}