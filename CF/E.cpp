#include <iostream>
#include <vector>

using namespace std;

// Function to find the year in which all signs will occur
int find_apocalypse_year(int n, const vector<int>& a) {
    int year = 1;
    for (int i = 0; i < n; ++i) {
        year = (year + a[i] - 1) / a[i] * a[i];
    }
    return year;
}

int main() {

	#ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << find_apocalypse_year(n, a) << endl;
    }

    return 0;
}
