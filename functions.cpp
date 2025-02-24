#include <iostream>
using namespace std;
    int max_of_four (int a, int b, int c, int d){
        int max_num = a; //assume a is the largest initially
        if (b > max_num) max_num = b;
        if (c > max_num) max_num = c;
        if (d > max_num) max_num = d;
        return max_num;
    }

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d)<< endl;
    return 0;
}