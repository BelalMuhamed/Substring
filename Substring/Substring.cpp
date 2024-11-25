

#include <iostream>
#include <string>

using namespace std;
void SubStrings(string str)
{
    for (int i = 0; i < str.length();i++)
    {
        for (int j = 1;j < str.length()-i;j++)
        {
            cout << str.substr(i, j)<<"\n";
        }
    }
}
int main()
{
    SubStrings("123A");
}

