<<<<<<< HEAD
// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno(cond) (cond ? cout << "YES" << endl : cout << "NO" << endl)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(v) (v).begin(), (v).end()
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define F first
#define S second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define debug(x) cerr << #x << " = " << x << endl

/*================ Utility Functions ================*/

template <typename T>
void read_vector(vector<T> &vec)
{
    for (auto &x : vec)
        cin >> x;
}

template <typename T>
void print_vector(const vector<T> &vec)
{
    for (const auto &x : vec)
        cout << x << " ";
    cout << endl;
}

template <typename T>
bool is_prime(T n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (T i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

/*===================================================*/
/*==================== Main Code ====================*/

ll func(ll tr, vll &vec)
{
    ll y = 0, count = 0;
    for (auto &i : vec)
    {
        if (i > tr)
            continue;
        y |= i;
        count++;
    }

    return (y == tr ? vec.size() - count : vec.size());
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        vll vec(a);
        read_vector(vec);
        ll r = a;
        for (ll i = 0; i < 32; i++)
        {
            ll target = (1 << i) - 1;
            r = min(r, func(target, vec));
        }
        cout << r << endl;
    }
    return 0;
}
=======
// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno(cond) (cond ? cout << "YES" << endl : cout << "NO" << endl)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(v) (v).begin(), (v).end()
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define F first
#define S second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define debug(x) cerr << #x << " = " << x << endl

/*================ Utility Functions ================*/

template <typename T>
void read_vector(vector<T> &vec)
{
    for (auto &x : vec)
        cin >> x;
}

template <typename T>
void print_vector(const vector<T> &vec)
{
    for (const auto &x : vec)
        cout << x << " ";
    cout << endl;
}

template <typename T>
bool is_prime(T n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (T i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

/*===================================================*/
/*==================== Main Code ====================*/

ll func(ll tr, vll &vec)
{
    ll y = 0, count = 0;
    for (auto &i : vec)
    {
        if (i > tr)
            continue;
        y |= i;
        count++;
    }

    return (y == tr ? vec.size() - count : vec.size());
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        vll vec(a);
        read_vector(vec);
        ll r = a;
        for (ll i = 0; i < 32; i++)
        {
            ll target = (1 << i) - 1;
            r = min(r, func(target, vec));
        }
        cout << r << endl;
    }
    return 0;
}
>>>>>>> dcf8e17d6d88c663d326be3db302271a8b0aabd7
