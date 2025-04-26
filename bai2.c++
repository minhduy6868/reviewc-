#include <iostream>
#include <vector>
#include <limits> 

using namespace std;

int main() {
    int n;

 
    while (true) {
        cout << "Nhập số lượng phần tử của mảng (phải lớn hơn 0): ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Vui lòng nhập một số nguyên lớn hơn 0." << endl;
        } else {
            break; 
        }
    }

    vector<int> arr(n);
    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxDivisibleBy3 = -1; 

    //kiển tra mảng chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            if (arr[i] > maxDivisibleBy3) {
                maxDivisibleBy3 = arr[i];
            }
        }
    }

    if (maxDivisibleBy3 != -1) {
        cout << "Số lớn nhất chia hết cho 3 là: " << maxDivisibleBy3 << endl;
    } else {
        cout << "Khong co" << endl;
    }

    return 0;
}
