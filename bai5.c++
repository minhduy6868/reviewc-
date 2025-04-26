#include <iostream>
using namespace std;

// Hàm đệ quy tính số Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Nhập giá trị n và kiểm tra điều kiện
    do {
        cout << "Nhập n (1 <= n <= 30): ";
        cin >> n;

        if (n < 1 || n > 30) {
            cout << "Giá trị không hợp lệ. Vui lòng nhập lại.\n";
        }
    } while (n < 1 || n > 30); // Lặp lại cho đến khi nhập đúng

    // In ra dãy Fibonacci từ F1 đến Fn
    cout << "Dãy Fibonacci từ F1 đến F" << n << " là:\n";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
