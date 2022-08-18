
// comment section
/*
  Approach:
    At first, I took the string input x. I took a loop for the query.
    Then I checked the type of the query. If the type is 1, I just simply changed the a-th
    index of x into p. If the type is 2 then I used the KMP algorithm to count the occurrences
    of k substring in x. in the count free function I used two for loop to count the frequency of
    the substring.



 Time complexity: O(n)
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsingned long long
#define lld long double
#define vi vector<int>
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 1e18
#define umap unordered_map
#define uset unordered_set
#define b begin
#define e end
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define ifor(i, a, n) for(int i = a; i <= n; i++)
#define printarr(arr) for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) cout<<arr[i]<<" ";
#define debug(x) cout<<#x<<" "; _print(x); cout<<endl;

//debug
void _print(int x){cout<<x;}
void _print(double x){cout<<x;}
void _print(ll x){cout<<x;}
void _print(string x){cout<<x;}
void _print(char x){cout<<x;}
void _print(bool x){cout<<x;}
template<class T> void _print(vector<T> v){cout<<"[ "; for(T i:v){_print(i); cout<<" ";} cout<<" ]";}
template<class T> void _print(set<T> v){cout<<"[ "; for(T i:v){_print(i); cout<<" ";} cout<<" ]";}
template<class T> void _print(uset<T> v){cout<<"[ "; for(T i:v){_print(i); cout<<" ";} cout<<" ]";}
template<class T, class V> void _print(pair<T,V> p){cout<<"{"; _print(p.ff); cout<<", "; _print(p.ss); cout<<"}";}
template<class T, class V> void _print(map<T,V> m){cout<<"[ "; for(auto i:m){_print(i); cout<<" ";} cout<<"]";}
template<class T, class V> void _print(umap<T,V> um){cout<<"[ "; for(auto i:um){_print(i); cout<<" ";} cout<<"]";}


//functions
ll binpow(ll a, ll b, ll m){
  a = a % m;
  if(b==0) return 1;
  if(b&1) return a * binpow(a*a, b/2, m) % m;
  else return binpow(a*a%m, b/2, m);
}


void computeLPSArray(string pat, int M,
                                 int lps[])
{


    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {


            if (len != 0)
            {
                len = lps[len - 1];


            }
            else
            {
                lps[i] = len;
                i++;
            }
        }
    }
}

int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();


    int lps[M];
    int j = 0;
    computeLPSArray(pat, M, lps);

    int i = 0;
    int res = 0;
    int next_i = 0;

    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {

            j = lps[j - 1];
            res++;
        }


        else if (i < N && pat[j] != txt[i])
        {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

int main(){
  string x;
    cin>>x;
    int z;
    cin>>z;
    ifor(i, 0, z-1){
        int type, a, m, n;
        char p;
        string k;
        cin>>type;
        if(type == 1){
            cin>>a>>p;
            x[a-1] = p;

        }
        else{
            cin>>m>>n>>k;
            string temp;
            ifor(i, m-1, n-1){
                temp.pb(x[i]);
            }

            cout<<KMPSearch(k, temp)<<endl;

        }
    }

}
