#include <iostream>

using namespace std;

void even_digits_cnt(long long n, int *ans) {
    bool last_dgt_even;
    long long next_dgt;

    if (n == 0) {
        (*ans)++;
        return;
    }

    last_dgt_even = (n & 1) == 0;

    if (last_dgt_even)
        (*ans)++;

    next_dgt = n / 10;

    if (next_dgt != 0)
        even_digits_cnt(next_dgt, ans);
    else
        return;
}

int main() {
    long long n;
    int ans = 0;

    cout << "Enter a number: ";
    cin >> n;

    even_digits_cnt(n, &ans);

    cout << "The number of even digits in the number: " << n << " is: "
        << ans << endl;

    return 0;
}