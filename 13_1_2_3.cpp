// 202414202 - Lê Trung Kiên (Lớp Điện tử 02 ET1 K69) - ET2031
#include <iostream>
using namespace std;

// Hàm lũy thừa này được dùng riêng ở bài 13.3, khác bài 13.2 ở chỗ là không cần trường hợp n = 0 hay các trường hợp đặc biệt của x như x = 1 hay x = 0 do x = 1/2
// Hàm sau trả về x^n

double luy_thua(double x, int n){
    double x_inital = x; 
    for(int j = 2; j <= n; j++){
        x *= x_inital;
    }
    return x;
}


int main() {

    int n;
    double x;

    n = 5; // Do đề bài xuất hiện x và n nhiều lần nên em nghĩ rằng có điều kiện n >= 0 còn x là số thực tùy í
    x = 4; // Đây là các gía trị mẫu mà em đặt để kiểm tra 

    cout << "n = " << n << ", x = " << x << endl;

    /********************** BAI SO 1 *************************/

    int factorial = 1;

    if ( n == 0 ){
        cout << "Bai 13.1: n! = 0! = 1" << endl;
    }
    else{
        for(int i = 2; i <= n; i++){
            factorial *= i;
        }
    
        cout << "Bai 13.1: n!= " << factorial << endl;
    }

    /********************** BAI SO 2 *************************/

    int x_initial = x; // Giá trị ban đầu của x

    if(n == 0){
        cout << "Bai 13.2: x^0 = 1" << endl;
    }
    else if (x == 0 || x == 1){
        cout << "Bai 13.2: x^n = " << x << endl; // Trường hợp này để không phải tính khi x = 0 hay x = 1 do nó giữ nguyên giá trị 
    }
    else{
        for(int i = 2; i <= n; i++){
            x *= x_initial;
        }
        cout << "Bai 13.2: x^n = " << x << endl;
    }
   

    /********************** BAI SO 3 *************************/

    double sum = 0;

    if (n == 0){
        cout << "Bai 13.3: n = 0 là không hợp lệ" << endl;
    }
    else {
        for(int i = 1; i <= n; i++){
            sum += luy_thua(0.5, i);
        }

        cout << "Bai 13.3, 1/2 + 1/4 + ... + (1/2)^n = " << sum << " với n = " << n << endl;
    }

    /************************* HET ​**​*************************/
    return 0;
}
