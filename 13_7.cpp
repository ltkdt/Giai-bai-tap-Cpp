#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list;
    int a;
    int max, min;
    uint8_t cnt = 0;

    while( true ){

        cin >> a;

        if(a == 0){
            
            break;
        }
        else{
            if(!cnt){
                max = a;
                min = a;
            }
            max = (max <= a) ? a : max;
            min = (min >= a) ? a : min;
            cnt++;
        }
    }

    cout << "Bai 13.7: so nguyen nho nhat duoc nhap vao la: " << min << " so nguyen lon nhat nhap vao la " << max << endl;

    return 0;

}