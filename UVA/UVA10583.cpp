#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair

vector<ll> parent, Size;

void make_set(ll n)
{
    parent.resize(n);
    Size.resize(n);
    for (ll i = 0; i < n; i++)
    {
        parent[i] = i;
        Size[i] = 1;
    }
}

void print()
{
    for(int i = 0 ; i < parent.size() ; i++)
    {
        cout << i << parent[i] << '\t';
    }
    cout << endl;
}
ll find(ll x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void union_sets(ll x, ll y)
{
    ll a = find(x), b = find(y);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll n, m , t1, t2 , test = 0;
    while (true)
    {
        ll count = 0;
        test += 1;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            return 0;
        }
        
        make_set(n);
        //0 0print();
        for (ll i = 0 ; i < m ; i++)
        {
            cin >> t1 >> t2;
            union_sets(t1-1,t2-1);
            //print();
        }
        for(ll i = 0 ; i < parent.size() ; i++)
        {
            if(parent[i]== i)
            {
                count++; 
            }
        }
        cout << "Case " << test << ": " << count << endl;
    }
}