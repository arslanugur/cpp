// 01. Say "Hello, World!" With C++
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}



// 02. Input and Output
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << a + b + c;
    return 0;
}



// 03. Basic Data Types
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf\n", i, l, c, f, d);
    
    return 0;
}



// 04. Conditional Statements
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    if (n == 1)
        cout << "one" << endl;
    else if (n == 2)
        cout << "two" << endl;
    else if (n == 3)
        cout << "three" << endl;
    else if (n == 4)
        cout << "four" << endl;
    else if (n == 5)
        cout << "five" << endl;
    else if (n == 6)
        cout << "six" << endl;
    else if (n == 7)
        cout << "seven" << endl;
    else if (n == 8)
        cout << "eight" << endl;
    else if (n == 9)
        cout << "nine" << endl;
    else
        cout << "Greater than 9" << endl;
    
    return 0;
}



// 05. For Loop
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int start, end;
    const string Digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> start;
    cin >> end;
    
    for (int i = start; i <= end; i++) {
        if (i > 9) {
            if (i%2)
                cout << "odd" << endl;
            else
                cout << "even" << endl;
            continue;
        }
        cout << Digits[i] << endl;
    }
        
    return 0;
}



// 06. Functions
#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int ret = a;
    if (b > ret)
        ret = b;
    if (c > ret)
        ret = c;
    if (d > ret)
        ret = d;
    return ret;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}



// 07. Pointer
#include <stdio.h>
#include <math.h>

void update(int *a, int *b) {
    int buf = *a;
    *a = *a + *b;
    *b = abs(buf - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


// 08. Arrays Introduction
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int array[1010];
    cin >> N;
    for (int i = N; i; i--)
        cin >> array[i];
    for (int i = 1; i <= N; i++)
        cout << array[i] << " ";
    return 0;
}



// 09. Variable Sized Arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    
    cin >> n >> q;
    
    vector<vector<int>> array(n);
    
    for (int i = 0; i < n; i++) {
        int k;
		cin >> k;

		array[i].resize(k);
		for (int j = 0; j < k; j++)
			cin >> array[i][j];
    }
    
    for (int i = 0; i < q; i++) {
        int row, col;
        cin >> row >> col;
        cout << array[row][col] << endl;
    }
    
    return 0;
}


