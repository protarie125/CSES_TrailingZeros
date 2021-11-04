#include <iostream>

using namespace std;

int solve(int n) {
    int b{ 5 };
    int count{ 0 };
    while (b <= n) {
        count += n / b;
        b *= 5;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    cin >> n;

    cout << solve(n);

    return 0;
}