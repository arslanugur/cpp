// 01. StringStream
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    int n = str.size();
    int i = 1;
    stringstream ss(str);
    vector<int> out;
    while (ss) {
        char ch;
        int num;
        ss >> num;
        out.push_back(num);
        ss >> ch;
    }
    return out;
}



// 02. Strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, aa, bb;
    cin >> a;
    cin >> b;
    aa = a;
    bb = b;
    char buf = aa[0];
    aa[0] = bb[0];
    bb[0] = buf;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    cout << aa << " " << bb << endl;
    
  
    return 0;
}


