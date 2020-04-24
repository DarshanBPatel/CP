#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    while (true)
    {
        cin >> n;
        cin >> m;
        if (n == 0 & m == 0)
            break;
        int dragon_head[n], knight_height[m];
        for (int i = 0; i < n; i++)
        {
            cin >> dragon_head[i];
        }
        sort(dragon_head, dragon_head + n);
        for (int i = 0; i < m; i++)
        {
            cin >> knight_height[i];
        }
        sort(knight_height, knight_height + m);
        int p1 = 0 , p2 = 0 , count = 0 , Ans = 0;
        while(p1 != n and p2 != m)
        {
            if(dragon_head[p1] <= knight_height[p2])
            {
                Ans += knight_height[p2];
                count += 1;
                p1 += 1;
                p2 += 1;
            }
            else
            {
                p2 += 1;
            }
            
        }
        if(count == n )
            cout << Ans;
        else 
            cout << "Loowater is doomed!";
        cout << endl;
        
    }
}