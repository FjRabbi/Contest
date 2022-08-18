// comment section
/*
  Approach:
  At first, I sorted the array in descending order.
  Now the sorted array contains the maximum number in its index sequentially.
  Then I find the k th maximum number in the sorted array.



  Time complexity: O(nlogn)
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


int main(){
  int n, k;
  cin>>n>>k;
  int arr[n];
  ifor(i, 0, n-1){
    cin>>arr[i];
  }

  sort(arr, arr+n, greater<int>());

  cout<<arr[k-1];

}
