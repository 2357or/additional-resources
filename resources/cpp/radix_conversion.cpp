#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
#define ALL(x) x.begin(),x.end()
#define rep(i, a, b) for(ll i=a;i<b;i++)


//#define FROM 4
//#define TO 16
#define SIZE 4

string solve(){
    // DATA
    string num;
    int from, to;


    // INPUT
    cout << "number: "; cin >> num;

    #ifdef FROM
        from = FROM;
    #else
        cout << "from: "; cin >> from;
    #endif

    #ifdef TO
        to = TO;
    #else
        cout << "to: "; cin >> to;
    #endif


    // MAIN
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
    string s = solve();
    #ifdef SIZE
        while (s.size() < SIZE) s = '0' + s;
    #endif
    cout << s << endl;
    return 0;
}

