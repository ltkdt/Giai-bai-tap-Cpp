#include <iostream>

using namespace std;

int main(){
    uint n, k;
    uint kgiai_thua, n_k_giai_thua;

    kgiai_thua = 1;
    n_k_giai_thua = 1;

    n = 7;
    k = 3;
    uint k_init = k;

    if(k == 0 || k == n){
        cout << "Bai 13.5: C(k, n) = 1" << endl;
    }
    else {
        
        for(int i = 2; i <= k; i++){
            kgiai_thua *= i;
        }

        k +=2 ;
        for( k ; k <= n; k++){
            n_k_giai_thua *= k;
        }

        cout << "Bai 13.5: C(k, n) voi n = " << n << " va k = " << k_init << " la: " << n_k_giai_thua / kgiai_thua << endl;
    }

}