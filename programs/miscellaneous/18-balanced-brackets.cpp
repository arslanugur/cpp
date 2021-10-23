#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string generate(int n, char left = '[', char right = ']')
{
    string str(std::string(n, left) + std::string(n, right));
    random_shuffle(str.begin(), str.end());
    return str;
}

bool balanced(const string &str, char left = '[', char right = ']')
{
    int count = 0;
    for (string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it == left)
            count++;
        else if (*it == right)
            if (--count < 0) return false;
    }
    return count == 0;
}

int main()
{
    srand(time(NULL)); // seed rng
    for (int i = 0; i < 9; ++i)
    {
        string s(generate(i));
        cout << (balanced(s) ? " ok: " : "bad: ") << s << "\n";
    }
}

/*
Output:
 ok: 
 ok: []
 ok: [[]]
bad: ][[]][
bad: [][[]]][
 ok: [][[][][]]
bad: []]][[[][[]]
 ok: [[[][][]][]][]
bad: ][]]][[[[[][]]][
*/
  
