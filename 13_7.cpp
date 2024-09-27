#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list;
    int a;

    while( true ){

        cin >> a;

        if(a == 0){
            break;
            return 0;
        }
        else{
            list.push_back(a);
        }
    }

    // int mini = *min_element(myList.begin(), myList.end());
    int cur_min = list[0] ;
    int cur_max = list[0] ;
    for(int i = 0; i < list.size(); i++){
        cur_min = (cur_min <= list[i]) ? cur_min : list[i];
        cur_max = (cur_max >= list[i]) ? cur_max : list[i];
    }

    cout << "Bai 13.7: so nguyen nho nhat duoc nhap vao la: " << cur_min << " so nguyen lon nhat nhap vao la " << cur_max << endl;

    return 0;

}