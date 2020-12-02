#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
#define ALL(x) x.begin(),x.end()
#define rep(i, a, b) for(ll i=a;i<b;i++)

string solve(){
    string num;
    int from, to;
    cout << "number: "; cin >> num;
    cout << "from: "; cin >> from;
    cout << "to: "; cin >> to;

    string exception = "";
    if(count(ALL(num), '-')) exception += "`number` must be natural number.\n";
    rep(i, 0, num.length()) if(num[i]-'0' >= (from > 10 ? 'A'+from-10-'0' : from)){
        exception += "`from` or `number` is not current.\n";
        break;
    }
    if(to < 2) exception += "`to` must be greater than 1.\n";
    if(exception.size()) return exception;

    reverse(ALL(num));
    ll n = 0;
    rep(i, 0, num.size()){
        int t = num[i] - '0';
        int next = t > 9 ? num[i]-'A' + 10 : t;
        n += next * powl(from, i);
    }
    string res = "";
    while(n){
        int t = n%to; n /= to;
        res += char(t > 9 ? 'A' + t-10 : t+'0');
    }
    reverse(ALL(res));
    return res;
}

int main(){
    cout << solve() << endl;
    return 0;
}
