#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ins insert
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<endl;
#define ntest 1
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sum(a) ( accumulate ((a).begin(), (a).end(), 0ll))
#define sz(x) ((int)x.size())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a)/__gcd(a,b)*(b)
#define endl '\n'
#define TIME cerr<<(clock() * 1.0 / CLOCKS_PER_SEC)
using namespace std;
using namespace __gnu_pbds;
template <typename T, typename V>
void ndarray(vector<T>& vec, const V& val, int len) { vec.assign(len, val); }
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
template <typename T> istream &operator>>(istream &is, vector<pair<T,T>> &vec) { for (auto &v : vec) is >> v.fi >> v.se ; return is; }
template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec) { for (auto v : vec) os << v << ' '; return os; }
template <typename T> ostream &operator<<(ostream &os, const vector<pair<T,T>> &vec) { for (auto v : vec) os << v.fi << " " << v.se << endl; return os; }
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<pii> vii;
const int mod = (int) 1e9 + 7;
const int inf = (int) 1e9 + 7;
const ll infll = (ll) 1e18 + 7;
void solve(){

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int Tc;
    if(ntest){
        int n=1;
        string a,b;
        vector<pair<string,string>> s={{"A","UNIQUE"},{"A#","Bb"},{"B","UNIQUE"},
        {"C","UNIQUE"},{"C#","Db"},{"D#","Eb"},{"D","UNIQUE"},{"E","UNIQUE"},{"F","UNIQUE"},{"G","UNIQUE"},{"F#","Gb"},{"G#","Ab"}};
        while(cin>>a>>b){
            if(a.size()==1){
                cout<<"Case "<<n<<": UNIQUE"<<endl;
            }
            else{
                for(auto i:s){
                    if(i.fi==a){
                        cout<<"Case "<<n<<": "<<i.se<<" "<<b<<endl;
                        break;
                    }
                    else if(i.se==a){
                        cout<<"Case "<<n<<": "<<i.fi<<" "<<b<<endl;
                        break;
                    }
                }
            }
            n++;
        }
    }
    else{
        solve();
    }
}

/*

*/
