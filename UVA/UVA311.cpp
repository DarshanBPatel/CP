#include <bits/stdc++.h>
using namespace std;
int cout_box(int area)
{
    int count = 0;
    while(area)
    {
        area = area -pow(int(sqrt(area)),2);
        cout << area << ' ';
        count += 1;
    }
    cout <<endl << count << endl;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int A[6];
    while (true)
    {
        int total = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> A[i];
            total += A[i];
        }
        if (total == 0)
            break;
        total = 0;
        for(int i = 0 ; i < 6 ; i++)
        {
            total += (i+1)*(i+1)*A[i];
        }
        cout_box(total);
    }
}
