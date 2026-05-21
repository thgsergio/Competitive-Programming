/*
 * Competitive Programming - Beginners Class
 * Problem [B] - Good Sequence
 *
 * May 20, 2026 - Wednesday
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;

    vector<long> a(n);
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long rm_nums = 0;
    long current_a = a[0];
    long occurrences = 1;
    for (long i = 1; i < n; i++)
    {
        if (current_a == a[i])
        {
            occurrences++;
            continue;
        }
        rm_nums += (current_a > occurrences) ? occurrences : occurrences - current_a;
        current_a = a[i];
        occurrences = 1;
    }
    rm_nums += (current_a > occurrences) ? occurrences : occurrences - current_a;

    cout << rm_nums << '\n';

    return 0;
}