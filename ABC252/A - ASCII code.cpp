#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> ascii_vals{ N };
    array<char, 5> char_arr{};
    for (auto& n : ascii_vals) {
        sprintf(char_arr.data(), "%c", n);
        printf("%s", char_arr.data());
    }
    cout << endl;

    return EXIT_SUCCESS;
}
