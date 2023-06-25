#include <iostream>
#include <vector>
using namespace std;
//insertion sort

int main()
{
    int length;
    int num;
    cout << "enter length of list: ";
    cin >> length;
    vector<int> arr(length, 0);
    for (int i = 0; i < length; i++) {
        cout << "enter number: ";
        cin >> num;
        arr[i] = num;
    }

    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i];
    }

    return 0;
}