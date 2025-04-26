#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

//khai báo struct Student 
struct Student {
    string ten;
    float toan;
    float li;
    float hoa;
    float tb;
};

// Hàm kiểm tra điểm hợp lệ
bool isValidScore(float score) {
    return score >= 0 && score <= 10;
}

int main() {
    int n;

    // Nhập số lượng sinh viên
    cout << "Nhập số lượng sinh viên: ";
    cin >> n;

    vector<Student> students(n);

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        cout << "Nhập tên sinh viên " << (i + 1) << ": ";
        cin.ignore(); // Bỏ qua ký tự newline còn lại
        getline(cin, students[i].ten);

        // Nhập điểm Toán
        do {
            cout << "Nhập điểm Toán (0-10): ";
            cin >> students[i].toan;
            if (!isValidScore(students[i].toan)) {
                cout << "Điểm không hợp lệ. Vui lòng nhập lại." << endl;
            }
        } while (!isValidScore(students[i].toan));

        // Nhập điểm Lý
        do {
            cout << "Nhập điểm Lý (0-10): ";
            cin >> students[i].li;
            if (!isValidScore(students[i].li)) {
                cout << "Điểm không hợp lệ. Vui lòng nhập lại." << endl;
            }
        } while (!isValidScore(students[i].li));

        // Nhập điểm Hóa
        do {
            cout << "Nhập điểm Hóa (0-10): ";
            cin >> students[i].hoa;
            if (!isValidScore(students[i].hoa)) {
                cout << "Điểm không hợp lệ. Vui lòng nhập lại." << endl;
            }
        } while (!isValidScore(students[i].hoa));

        // Tính điểm trung bình
        students[i].tb = (students[i].toan + students[i].li + students[i].hoa) / 3;
    }

    // In danh sách tất cả sinh viên
    cout << "\nDanh sách tất cả sinh viên:\n";
    cout << left << setw(20) << "Tên sinh viên" 
         << setw(10) << "Toán" 
         << setw(10) << "Lý" 
         << setw(10) << "Hóa" 
         << setw(10) << "TB" << endl;

    for (const auto& student : students) {
        cout << left << setw(20) << student.ten 
             << setw(10) << student.toan 
             << setw(10) << student.li 
             << setw(10) << student.hoa 
             << setw(10) << fixed << setprecision(2) << student.tb << endl;
    }

    cout << "----------------------------------------------------------";
    // In danh sách sinh viên có điểm TB lớn hơn 8
    cout << "\nDanh sách sinh viên có điểm trung bình lớn hơn 8:\n";
    cout << left << setw(20) << "Tên sinh viên" 
         << setw(10) << "Toán" 
         << setw(10) << "Lý" 
         << setw(10) << "Hóa" 
         << setw(10) << "TB" << endl;

    for (const auto& student : students) {
        if (student.tb > 8) {
            cout << left << setw(20) << student.ten 
                 << setw(10) << student.toan 
                 << setw(10) << student.li 
                 << setw(10) << student.hoa 
                 << setw(10) << fixed << setprecision(2) << student.tb << endl;
        }
    }

    return 0;
}
