#include <iostream>
#include <vector>

using namespace std;

int main(){
    uint8_t byte, byte_init;
    vector<uint> remainder_list;

    byte = 234;
    byte_init = byte;

    while(byte != 0){
        uint remainder = byte % 2;

        remainder_list.push_back(remainder);

        byte = (byte - remainder) / 2;
    }
    cout << "Bai 13.6: n = " << unsigned(byte_init) << " sang he nhi phan se la:" << endl;
    for(int i = remainder_list.size()-1; i >= 0 ; i--){
        cout << remainder_list[i];
    }
    cout << "\n";
 
}