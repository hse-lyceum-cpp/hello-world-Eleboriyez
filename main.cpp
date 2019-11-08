#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, ans, i;
    cin >> n;
    ans = 0;
    for (i=1;i<=trunc(sqrt(n));i++) {
        if (n%i==0) ans++;
    }
    ans++;
    cout << (ans==2?"prime":"composite") << endl;
    return 0;
}
