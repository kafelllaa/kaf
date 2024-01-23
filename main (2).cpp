#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, d, n, i;
    cin >>x>> d >>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = x +i*d;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<< " ";
    }
}
