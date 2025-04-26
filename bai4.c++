#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> unique; // Mảng phụ để lưu giá trị phân biệt

    // Nhập các phần tử của mảng
    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tìm giá trị phân biệt
    for (int i = 0; i < n; i++) {
        bool isUnique = true; // Biến kiểm tra giá trị phân biệt
        for (int j = 0; j < unique.size(); j++) {
            if (arr[i] == unique[j]) {
                isUnique = false; // Nếu đã tồn tại trong mảng phụ
                break;
            }
        }
        // Nếu giá trị chưa tồn tại, thêm vào mảng phụ
        if (isUnique) {
            unique.push_back(arr[i]);
        }
    }

    // In ra số lượng giá trị phân biệt
    cout << "Số lượng giá trị phân biệt trong mảng: " << unique.size() << endl;

    // In ra các giá trị phân biệt
    cout << "Các giá trị phân biệt là:\n";
    for (int i = 0; i < unique.size(); i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
