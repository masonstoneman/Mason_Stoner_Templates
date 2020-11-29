// Mason Stoner
//CIS 1202
// 11/30/2020

#include <iostream>
#include <cmath>

using namespace std;

template <class T>
float half(const T)
{
    round(T);

    cout << T endl;
}

int half(int i)
{
    float m = static_cast<float>(i);

    round(i);
    cout << i << endl;
}


int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

}


