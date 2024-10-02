// 202414202 - Lê Trung Kiên (Lớp Điện tử 02 ET1 K69) - ET2031
#include <iostream>
using namespace std;

/*
Chú thích cho bài làm

 - Các biến có tên với đuôi init là nhằm mục đích lưu giữ giá trị ban đầu của biến trước chữ “init"
 - Em không gõ dấu khi mà in ra console với cout vì khi em thử thì in ra chữ tiếng Việt trong terminal có vẻ rất khó đọc 
*/

int main() {

    /********************** BAI SO 1 *************************/

    {
        int n;
        n = 5;
        int factorial = 1;

        if ( n == 0 ){
            cout << "Bai 13.1.1: n! = 0! = 1" << endl;
        }
        else{
            for(int i = 2; i <= n; i++){
                factorial *= i;
            }

            cout << "Bai 13.1.1: n! = " << n << "! = " << factorial << endl;
        }
    }
    cout << '\n';
    
    /********************** BAI SO 2 *************************/

    {
        uint n;
        double x;

        n = 5;
        x = 4;

        int x_initial = x; // Giá trị ban đầu của x

        if(n == 0){
            cout << "Bai 13.1.2: x^0 = 1" << endl;
        }
        else if (x == 0 || x == 1){
            cout << "Bai 13.1.2: x^n = " << x << endl; // Trường hợp này để không phải tính khi x = 0 hay x = 1 do nó giữ nguyên giá trị 
        }
        else{
            for(int i = 2; i <= n; i++){
                x *= x_initial;
            }
            cout << "Bai 13.1.2: x^n = " << x << " voi gia tri cua x la " << x_initial << " n la " << n << endl;
        }
    }
    cout << '\n';

    /********************** BAI SO 3 *************************/

    { 
        double sum = 0;
        int n;
        double x = 0.5;
        int i = 0;

        n = 2;

        if (n == 0){
            cout << "Bai 13.1.3: n = 0 là không hợp lệ" << endl;
        }
        if (n == 1){
            cout << "Bai 13.3: n = 1 : " << 1.5 << endl;
        }
        else {
            for(int i = 2; i <= n; i++){
                x *= 0.5;
                sum += x;
            }

            cout << "Bai 13.1.3, 1/2 + 1/4 + ... + (1/2)^n = " << sum + 1.5 << " với n = " << n << endl;
        }
    }
    cout << '\n';

    /********************** BAI SO 4 *************************/

    {
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
            cout << "Bai 13.1.4: n = " << n << " la so nguyen to" << endl;
        }
        else{
            cout << "Bai 13.1.4: n = " << n << " khong phai la so nguyen to" << endl;
        }
    }
    cout << '\n';

    /********************** BAI SO 5 *************************/
    {
        uint n, k;
        uint kgiai_thua, n_k_giai_thua;

        kgiai_thua = 1;
        n_k_giai_thua = 1;

        n = 7;
        k = 3;
        uint k_init = k;

        if(k == 0 || k == n){
            cout << "Bai 13.1.5: C(k, n) = 1" << endl;
        }
        else {
            
            for(int i = 2; i <= k; i++){
                kgiai_thua *= i;
            }

            k +=2 ;
            for( k ; k <= n; k++){
                n_k_giai_thua *= k;
            }

            cout << "Bai 13.1.5: C(k, n) voi n = " << n << " va k = " << k_init << " la: " << n_k_giai_thua / kgiai_thua << endl;
        }
    }
    cout << '\n';

    /********************** BAI SO 6 *************************/
    {
        uint8_t byte;
        byte = 234;
        uint8_t byte_init = byte;
        int bin = 0,i = 1;

        while(byte != 0){
            uint remainder = byte % 2;
            byte = (byte - remainder) / 2;

            bin = bin + remainder * i;

            i = i * 10;
        }

        cout << "Bai 13.1.6, bieu dien he nhi phan cua " << (unsigned)byte_init << " la " << bin << endl;
    }
    cout << '\n';

    /********************** BAI SO 7 *************************/

    {
        cout << "Nhap input cho bai 7" << endl;

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

        cout << "Bai 13.1.7: so nguyen nho nhat duoc nhap vao la: " << min << " so nguyen lon nhat nhap vao la " << max << endl;
        cout << '\n';
    }

    /********************** BAI SO 8 *************************/

    {
        cout << "Nhap input cho bai 8" << endl;
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
        cout << '\n';
    }

    /********************** BAI SO 9 *************************/
    
    {
        int n; 
        n = 7;
        int f0 = 1;
        int f1 = 1;
        int fn = 1;
        int i;

        cout << "Bai 13.1.9 Day fibonanci voi n = " << n << " la: " << endl;
    
        if (n <= 0) {
            cout << "Khong ton tai ";
        } else if (n == 1) {
            cout << f0 << " ";
        } 
        else if (n == 2) {
            cout << f0 << " " << f1 << endl;
        }
        else {
            cout << f0 << " " << f1 << " ";
            for (i = 2; i < n; i++) {
                f0 = f1;
                f1 = fn;
                fn = f0 + f1;
                cout << fn << " ";
            }
        }

        cout << '\n';
    }

    /********************** BAI SO 10 *************************/

    {
        cout << "Nhap input cho bai 10" << endl;
        int n; 
        int f0 = 1;
        int f1 = 1;
        int fn = 1;
        int cnt = 3;

        cin >> n;

        if (n < 0){
            cout << "Bai so 13.1.10: Day ko the la 1 so fibonanci" << endl; 
        }
        if (n == 1){
            cout << "Bai so 13.1.10: Day co the la so dau tien hoac thu hai cua fibonanci" << endl;
        }
        else{
            while( 1 ){
                f0 = f1;
                f1 = fn;
                fn = f0 + f1;
                
                if (fn == n){
                    cout << "Bai so 13.1.10: Day la so thu " << cnt << " cua day fibonanci" << endl;
                    break;
                }
                else if (fn > n ){
                    cout << "Bai so 13.1.10: Day ko phai 1 so cua day fibonanci" << endl;
                    break;
                }
                else{
                    cnt++;
                }
            }
        }
        cout << '\n';
    }
    
    /********************** BAI SO 11 *************************/

    {
        int n;
        n = 7;
        double x, y;
        x = n;
        y = 1;

        double approx = 1e-8;

        while(x - y > approx){
            x = (x + y) / 2;
            y = n / x;
        }

        cout << "Bai so 13.1.11: can bac 2 cua so n = " << n  << " la: " << x << endl;
        cout << '\n';
    }
    
    /********************** BAI SO 12 *************************/
    
    {
        cout << "Nhap input cho bai 12" << endl;
        uint a,b,c,d;
        cin >> a >> b >> c >> d;

        double x, y;
        double approx = 1e-8;

        int num = (a * 1000) + (b * 100) + (c * 10) + d;
        if ( !(num > 999 && num < 10000) ){
            cout << num << endl;
            cout << "Bai 13.1.12: Nhap input ko hop le" << endl;
        }
        else{
            x = num;
            y = 1;
            while (x - y > approx){
                x = (x + y) / 2;
                y = num / x;
            }

            cout << "Bai 13.1.12: Can bac 2 cua " << num << " la: " << x << endl;
            cout << '\n';
        }
    }
    
    /********************** BAI SO 13 *************************/
    
    {
        cout << "Bai so 13.1.13: "<< endl;

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
        cout << '\n';

    }
    
    /********************** BAI SO 14 *************************/
    
    {
        /*
        Bài làm của em sẽ không kiểm tra nếu 3 cạnh có tạo thành 1 tam giác không, 
        lí do là nếu em sử dụng cách mà em đã lấy căn bậc 2 ở bài trước và áp dụng cho cả 
        3 biến chương trình sẽ quá dài và rườm rà trong khi cách lấy căn bậc 2 của 1 số đã được minh 
        họa ở bài 11, 12. Việc lặp lại như vậy theo em là không cần thiết.
        */

        uint a,b,c;
        
        a = 9;
        b = 16;
        c = 25;

        cout << "Bai 13.1.14: phan chia loai tam giac theo binh phuong cac canh voi a^2 = " << a << " b^2 = " << b << " c^2 = " << c << endl;
        cout << "Chia loai tam giac theo canh:" << endl;
        
        if( a == b || b == c || c == a){
            if ( (a == b ) && ( b == c) ){
                cout << "Day la tam giac deu" << endl;
            }
            else{
                cout << "Day la tam giac can" << endl;
            }
        }
        else{
            cout << "Day la tam giac thuong" << endl;
        }

        cout << "Chia loai tam giac theo goc:" << endl;

        if( c > a + b || a > b + c || b > a + c ){
            cout << "Tam giac tu" << endl;
        }
        else if ( c == a + b || a == b + c || b == a + c){
            cout << "Tam giac vuong" << endl;
        }
        else{
            cout << "Tam giac nhon" << endl;
        }
        cout << '\n';
    }
    
    /********************** BAI SO 15 *************************/
    
    {
        int a = 97;
        int lowercase = 65;

        cout << "Bai 13.1.15: Ma so ascii va chu cai, chu so tuong ung" << endl;
        for( a = lowercase; a < 91; a++){
            cout << a << " "<< (char)a << "   ";
            cout << a + 32 << " "<< (char)(a+32) << endl;
        }

        cout << '\n';

        for( a = 48; a < 58; a++){
            cout << a << " " << (char)a << "   " << endl;
        }
        cout << '\n';
    }

    /************************* HET ​**​*************************/

    return 0;
}
