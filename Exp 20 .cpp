//sneha diwaan
//entc B2
//23070123126
//experiment 20
// selection sort 
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void s_sort(int *a, int elements) {
    int n = 0;
    int *b;

    while (n < elements) {
        b = a + 1;
        for (int i = 0; i < (elements - 1) - n; i++) {
            if (*a > *b) {
                swap(a, b);
            }
            b++;
        }
        n++;
        a++;
    }
}

int main() {
    int no_el;
    cout << "How many elements in your array?" << endl;
    cin >> no_el;
    int arr[no_el];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    s_sort(arr, no_el);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
/*
How many elements in your array?
3
Enter the elements of the array: 
55 88 99
Sorted array: 
55 88 99 
=== Code Execution Successful ===


*/
