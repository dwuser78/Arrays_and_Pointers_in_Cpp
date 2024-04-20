#include <iostream>

using namespace std;

int calc_cnt_ways(int n, int k = 3) {
    int ways;

    if (n == 0) return 1;
    else if (n < 0) return 0;

    ways = calc_cnt_ways(n - k, k);
    ways += calc_cnt_ways(n - 1, k);

    return ways;
}

int main() {
    int n;
    int k;

    cout << "Enter the number of steps: ";
    cin >> n;

    cout << "Enter the length of the jump: ";
    cin >> k;

    cout << "The number of ways to climb a ladder: " << calc_cnt_ways(n, k)
        << endl;

    return 0;
}