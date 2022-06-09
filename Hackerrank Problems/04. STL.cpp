// 01. Vector-Sort
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int> vec;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    
    return 0;
}



// 02. Vector-Erase
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, pos, right, left;
    cin >> n;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    cin >> pos;
    cin >> left >> right;
    vec.erase(vec.begin() + pos - 1);
    vec.erase(vec.begin() + left - 1, vec.begin() + right - 1);
    
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    
    return 0;
}


// 03. Lower Bound-STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    cin >> q;
    for(int i = 0; i < q; i++) {
        vector<int>::iterator low;
        int num;
        cin >> num;
        low = lower_bound(v.begin(), v.end(), num);
        if (v[low - v.begin()] == num)
            cout << "Yes " << (low - v.begin()+1) << endl;
        else
            cout << "No " << (low - v.begin()+1) << endl;
    }
    
    return 0;
}



// 04. Sets-STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    
    for (int i = 0; i < q; i++) {
        int type, num;
        cin >> type >> num;
        
        switch(type) {
            case 1:
                s.insert(num);
                break;
            case 2:
                s.erase(num);
                break;
            case 3:
                if (s.find(num) == s.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
                break;
        }
    }
    return 0;
}



// 05. Maps-STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;
    map<string, int> m;
    
    for (int i = 0; i < q; i++) {
        int type, num;
        string name;
        cin >> type;
        
        switch(type) {
            case 1:
                cin >> name >> num;
                if (m.find(name) == m.end())
                    m.insert(make_pair(name, num));
                else
                    m[name] += num;
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            case 3:
                cin >> name;
                if (m.find(name) == m.end())
                    cout << "0" << endl;
                else
                    cout << m[name] << endl;
                break;
        }
    }
    return 0;
}



// 06. Print Pretty
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part



// 07. Deque-STL
#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k) {
    std::deque<int>  dq(k);
    int i;
    
    for (i = 0; i < k; ++i) {
        while ( (!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
 
        dq.push_back(i);
    }
 
    for ( ; i < n; ++i) {
        cout << arr[dq.front()] << " ";
 
        while ( (!dq.empty()) && dq.front() <= i - k)
            dq.pop_front();
 
        while ( (!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
 
        dq.push_back(i);
    }
 
    cout << arr[dq.front()] << endl;
}

int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}



