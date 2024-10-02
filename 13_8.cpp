#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list;
    int a;
    int cnt_2 = 0;
    int cnt_8 = 0;
    int cnt_in = 0;
    while( true ){

        cin >> a;

        if(a == 0){
            
            break;
        }
        else{
            cnt_in++;
            // cout << (a & 1) << endl;
            if( (a & 1) == 0 ){
                cnt_2++;
                if( (a & 7) == 0 ){
                    cnt_8++;
                }
            }
        }
    }

    cout << "Bai 13.1.8: so cac so chan la: " << cnt_2 << " so so le la: " << cnt_in - cnt_2 << " so so chia het cho 8 la: " << cnt_8 << endl;
    // int mini = *min_element(myList.begin(), myList.end());
    
    return 0;

}