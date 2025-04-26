#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; 
    }
    return true; 
}

int main() {
    int n;

    cout << "Nhập một số nguyên n: ";
    cin >> n;

    if(n <= 2 ) {
        cout << "Khong co so nguyen to nao";
        return 0;
    }
    cout << "Các số nguyên tố nhỏ hơn " << n << " là: ";
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
