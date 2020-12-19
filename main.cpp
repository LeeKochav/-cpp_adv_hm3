#include "alg.h"
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    // int ia[] = {13};
    // bool f = Fib(begin(ia), end(ia));
    // cout << f << endl;
    // int ia[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int *p = Transpose(begin(ia), end(ia));
    //    cout << *(p - 3) << endl;
    // double ia[] = {1.1, 2.2, 3.3, 10.1, 8.1, 6.1};
    // double *p = Transpose(begin(ia), end(ia));
    // for (auto it = begin(ia); it != end(ia); ++it)
    // {
    //     cout << (*it) << endl;
    // }
    int ia[] = {1, 2, 3, 10, 8};
    vector<int> vec(3);
    auto p = Transform2(begin(ia), end(ia), vec.begin(),
                        [](const int x, const int y) { return x + y; });
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << (*it) << endl;
    }
    cout << *(p - 1) << endl;

    return 0;
}