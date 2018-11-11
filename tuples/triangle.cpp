#include <iostream>
#include <utility>

using namespace std;


int main()
{
    pair<double, double> X, Y, Z;
    cin >> X.first >> X.second;
    cin >> Y.first >> Y.second;
    cin >> Z.first >> Z.second;

    pair<double, double> T;
    T.first = (X.first + Y.first + Z.first) / 3;
    T.second = (X.second + Y.second + Z.second) / 3;

    cout << T.first << " " << T.second << endl;

}