/*
   ##############################################
   #              GAURAV DOTIYAL                #
   ##############################################
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define YES "YES"
#define NO "NO"
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define ll long long

//for finding nCr for a combination using pascal's triangle
int nCr(int n, int r) {
    // Create a DP table to store intermediate results
    vector<vector<int>> dp(n + 1, vector<int>(r + 1, 0));

    // Populate the DP table
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, r); ++j) {
            // Base cases
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                // Pascal's Triangle relation
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][r];
}


//to find the most significant bits of a number
int msbSignificance(int n) {
    int index = floor(log2(n));
	return (1 << index);
}

// Prime factor in O(sqrt)
void Primefactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            cout << i << "^" << count << "*";
        }
    }
    if (n > 1)
    {
        cout << n << "^" << 1 << endl;
    }
}

// Prime number in O(sqrt)
bool Isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// sieve of eratosthenes
int is_prime[1000001];
void sieve()
{
    int maxn = 1000000;

    for (int i = 0; i <= maxn; i++)
        is_prime[i] = 1;

    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= maxn; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxn; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

// finding the lcm
int lcm(int a, int b)
{
    return (a / __gcd( a, b)) * b;
}

 void rotate(vector<int> &arr, int n, int k)
{
    vector<int> brr(n);
    for (int i = 0; i < n; i++)
    {
        brr[(i + k) % n] = arr[i];
    }
    arr = brr;
}

// to find the difference of very largest number(s1-s2) of same length
void findiff(string s1, string s2, int n)
{

    reverse(s2.begin(), s2.end());
    int carry = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        int t = s1[i] - s2[i] - carry;
        if (t < 0)
        {
            t += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        ans += ('0' + t);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

// To calculate a power of b in logn used in mod inverse if(b/a)%mod=(b%mod*(a^mod-2))mod
// if (b-a)%mod = ((b-a)%mod+mod)%mod
int binpow(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;
    }
    return res;
}

//function to store the prime factors of a number in o(sqrt(n))
void factors(int n,vector<int> &store){
    for(int i=2;i*i<=n;++i){
        if(n%i==0){ 
            while(n%i==0){
                store.push_back(i);
                n=n/i;
            }
        } 
    }
    if(n>1){
        store.push_back(n); 
    }  
}

//modulo of a very big string  by n
int modulu(string s, int n)
{
    int res = 0;
    // Process all elments in the string by sliding
    for (int i = 0; i < s.length(); i++)
    {
        res = (res * 10 + s[i] - '0') % 8;
    }
    return res;
}

void solve()
{
     
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        int a,b;
        cin>>a>>b;
         
    }

    return 0;
}

/*
   Think about it ~ It will solved itself
   Dont stuck on same problem for more than (40m || 1hr)
   Don't code before understanding in mind completely.
*/
