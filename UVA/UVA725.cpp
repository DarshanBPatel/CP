#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_check(ll a, ll b)
{
    int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ll t1, t2;
    for (int i = 0; i < 5; i++)
    {
        t1 = a % 10;
        a /= 10;
        t2 = b % 10;
        b /= 10;
        A[t1] = 1;
        A[t2] = 1;
        //cout << t1 << " " << t2 <<  ;
    }
    ll Temp = accumulate(A, A + 10, 0);
    //cout << Temp << endl;
    if (Temp == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N;
    while (true)
    {
        cin >> N;
        if (N == 0)
        {
            break;
        }
        bool x = true;
        for (ll i = 1234; i < 98765 / N; i++)
        {
            if (is_check(i, i * N))
            {
                x = false;
                if (i < 10000)
                {
                    cout << i * N << " / " << '0' << i << " = " << N << endl;
                }
                else
                {
                    cout << i * N << " / " << i << " = " << N << endl;
                }
            }
        }
        if (x)
        {
            cout << "There are no solutions for " << N << "."<< endl;
        }
    }
}