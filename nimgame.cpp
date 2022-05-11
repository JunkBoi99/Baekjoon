//님게임
#include <iostream>
using namespace std;
 
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n; cin >> n;
    int x = 0;
    int flag = 0;
    while (n--) {
        int a; cin >> a;
        if (a > 1) flag++;
        x ^= a;
    }
 
    if (flag && !x || !flag && x == 1)
        cout << "cubelover";
    else
        cout << "koosaga";
    return 0;
}
//님게임2
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int n; cin >> n;
    int x = 0;
    while (n--) {
        int a; cin >> a;
        x ^= a;
    }
    if (x) cout << "koosaga";
    else cout << "cubelover";
    return 0;
}