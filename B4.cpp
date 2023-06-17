#include <iostream> //Bai 4: Quicksort
#include <fstream>
using namespace std;

// Hàm hoán đổi hai phần tử
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Hàm chia mảng và đặt phần tử chốt tại đúng vị trí
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Chọn phần tử chốt
    int i = (low - 1); // Chỉ mục của phần tử nhỏ hơn phần tử chốt

    for (int j = low; j <= high - 1; j++) {
        // Nếu phần tử hiện tại nhỏ hơn hoặc bằng phần tử chốt
        if (arr[j] <= pivot) {
            i++; // Tăng chỉ mục của phần tử nhỏ hơn phần tử chốt
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Hàm sắp xếp QuickSort chính
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi là chỉ mục của phần tử chốt, arr[pi] đã đứng ở đúng vị trí cuối cùng
        int pi = partition(arr, low, high);

        // Sắp xếp các phần tử trước và sau phần tử chốt
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm in mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Hàm main
int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa của mảng
    int arr[MAX_SIZE];
    int n = 0; // Số phần tử trong mảng

    ifstream inputFile("Mang.txt");
    if (!inputFile) {
        cout << "Khong the mo file.";
        return 1;
    }

    while (inputFile >> arr[n]) {
        n++;
        if (n >= MAX_SIZE) // Đảm bảo không đọc quá số phần tử tối đa cho phép
            break;
    }
    inputFile.close();

    cout << "Mang ban dau: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Mang sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
/*file txt: Mang txt
9
10
8
7
1
5
*/
