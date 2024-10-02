#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

int main(){


    int m, n;
    m = 3;
    n = 2;
    int j;

    cout << "     ";
    for(j = 1; j <= m; j++){
        cout << j << "    ";
    }
    cout << '\n';

    for(int i = 1; i <= n; i++){
        cout << i << "    ";
        for(j = 1; j <= m; j++){
            cout << i*j << "    ";
        }
        cout << "\n";
    }

    return 0;

}