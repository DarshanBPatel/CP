#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int test, n, temp, Ans = 1;
    cin >> test;
    while (test)
    {
        cin >> n;
        n -= 1;
        int sum = 0, ans = 0;
        bool flag = false;
        int c_11 = 1, c_12 = 1, c_21, c_22, count = 1;
        while (n--)
        {
            cin >> temp;
            count += 1;
            sum += temp;
            c_12 += 1;
            if (sum > ans)
            {
                flag = true;
                c_21 = c_11;
                c_22 = c_12;
                ans = sum;
            }
            if (sum < 0)
            {
                sum = 0;
                c_11 = count, c_12 = count;
            }
            // but we reset the running sum
        }
        if (flag)
            cout << "The nicest part of route " << Ans << " is between stops " << c_21 << " and " << c_22 << endl;
        else
            cout << "Route " << Ans << " has no nice parts" << endl;
        Ans += 1;
    }
}