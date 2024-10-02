#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

int main(){

    int a = 97;
    int lowercase = 65;

    cout << "Ma so ascii va chu cai tuong ung" << endl;
    for( a = lowercase; a < 91; a++){
        cout << a << " "<<(char)a << "   ";
        cout << a + 32 << " "<< (char)(a+32) << endl;
    }


    return 0;

}