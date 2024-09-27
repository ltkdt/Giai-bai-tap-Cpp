#include <iostream>

using namespace std;

int main(){
    uint n;

    n = 39;
    bool nguyen_to = true;

    for(int i = 2; i < (n/2) +1; i++){
        if(n%i == 0){
            nguyen_to = false;
            break;
        }
    }

    if(nguyen_to){
        cout << "Bai 13.4: n = " << n << " la so nguyen to" << endl;
    }
    else{
        cout << "Bai 13.4: n = " << n << " khong phai la so nguyen to" << endl;
    }
}