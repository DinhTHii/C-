#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    try {
        int n;
        cin >> n;

        long long x;
        cin >> x;

        long long *a = new long long[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int dem = 0;
        int i = 0, j = n - 1;

        while (j != i) {
            if (a[i] + a[j] < x) {
                i++;
            } else if (a[i] + a[j] > x) {
                j--;
            } else {
                dem++;
                i++;
                j--;
            }
        }

        cout << dem;

        delete[] a;
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
