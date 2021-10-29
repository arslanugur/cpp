#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
void print(const string& item)
{
    cout<< endl << item ;
}

int main()
{
    set<string> sortedItems;
    int size;
    cout<< "How many names you want to sort : ";
    cin>>size;
    for(int i = 1; i <= size; ++i)
    {
        string name;
        cout << i << ". ";
        cin >> name;

        sortedItems.insert(name);
    }
    cout<< "Sorted String -> ";
    for_each(sortedItems.begin(), sortedItems.end(), &print);
    return 0;
}

/*
Output:
How many names you want to sort : 5
1. Mark
2. Larry
3. Bill
4. Harry
5. John
Sorted String ->
Bill
Harry
John
Larry
Mark
*/

