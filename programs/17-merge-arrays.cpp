#include <iostream>
using namespace std;
int merge(int [], int, int [], int, int []);

int main() {
int a[100], b[100], m, n, c, sorted[200];

cout<<"Input number of elements in first array\n";
cin>>m;

cout<<"Input"<<m<<"integers\n";
for (c = 0; c < m; c++) {
cin>>a[c];
}

cout<<"Input number of elements in second array\n";
cin>>n;

cout<<"Input"<<n<<"integers\n";
for (c = 0; c < n; c++) {
cin>>b[c];
}

merge(a, m, b, n, sorted);

cout<<"Sorted array:\n";

for (c = 0; c < m + n; c++) {
cout<<sorted[c]<<"\n";
}

return 0;
}
int merge(int a[], int m, int b[], int n, int sorted[]) {
int i, j, k;
j = k = 0;
for (i = 0; i < m + n;) {
if (j < m && k < n) {
if (a[j] < b[k]) {
sorted[i] = a[j];
j++;
}
else {
sorted[i] = b[k];
k++;
}
/if element of a array is less than b then push it in resultant array else push element of b in array/
i++;
}
else if (j == m) {
for (; i < m + n;) {
sorted[i] = b[k];
k++;
i++;
/if array a is finished push all the elements of b in resultant array/
}
}
else {
for (; i < m + n;) {
sorted[i] = a[j];
j++;
i++;
/if array b is finished push all the elements of a in resultant array/
}
}
}
}
/*Output:
Input number of elements in first array                                            
3                                                                                  
Input 3 integers                                                                     
6 5 4                                                                              
Input number of elements in second array                                           
3                                                                                  
Input 3 integers                                                                     
3 2 1                                                                              
Sorted array:                                                                      
3                                                                                  
2                                                                                  
1                                                                                  
6                                                                                  
5                                                                                  
4 */
  
  
