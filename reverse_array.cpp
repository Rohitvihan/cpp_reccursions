#include <bits/stdc++.h>
using namespace std;

void reverse_array(int n, int arr[], int i) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse_array(n, arr, i + 1);
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    reverse_array(n, arr, 0);

    cout << "The reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
