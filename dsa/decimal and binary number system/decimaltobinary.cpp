// decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        n = n >> 1;
        ans = (bit * pow(10, i)) + ans;
        i++;
    }
    cout << "answer is " << ans << endl;
}