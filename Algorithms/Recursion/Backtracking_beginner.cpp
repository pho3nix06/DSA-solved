#include <iostream>
using namespace std;

// 1 to N printing using backtracking
/*void test(int i, int e)
{
    if (i < 1)
    {
        return;
    }
    test(i - 1, e);
    cout << i << endl;
}*/

//N to 1 using backtracking 
void test(int i, int e)
{
    if (i > e)
    {
        return;
    }
    test(i + 1, e);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    test(1, n);
    return 0;
}
