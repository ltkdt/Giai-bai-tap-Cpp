#include <iostream>

using namespace std;

// https://giangday.vst.edu.vn/lab/course/CPP?index=13&chapter=exercise

int main(){

    uint a,b,c;

    if(a == b){
        if( a== c){
            cout << "tam giac deu" << endl;
        }
        else if(a + b == c){
            cout << "tam giac vuong can" << endl;
        }
        else{
            cout << "tam giac can" << endl;
        }
    }

    cout << "Chia loai tam giac theo goc" << endl;

    if( c > a + b || a > b + c || b > a + c ){
        cout << "tam giac tu" << endl;
    }
    else if ( c == a + b || a == b + c || b == a + c){
        cout << "tam giac vuong" << endl;
    }
    else{
        cout << "tam giac nhon" << endl;
    }
    
    return 0;

}