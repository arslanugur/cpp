#include <iostream>
using namespace std;
int main()
{
int n, array[1000], c, d, t;

cout<<"Enter number of elements\n";
cin>>n;

cout<<"Enter"<<n<<"integers\n";

for (c = 0; c < n; c++) {
cin>>array[c];
}

for (c = 1 ; c <= n - 1; c++) {
d = c;

/* positioning element at c, by this way all the elements in ascending order */
while ( d > 0 && array[d] < array[d-1]) {
t = array[d];
array[d] = array[d-1];
array[d-1] = t;
d--;
}
}

cout<<"Sorted list in ascending order:\n";

for (c = 0; c <= n - 1; c++) {
cout<<array[c]<<"\n";
}

return 0;
}
/*
Output:
Enter number of elements: 5                                                                                  
Enter5integers: 2 4 66 11 1                                                                        
Sorted list in ascending order:                                                    
1                                                                                  
2                                                                                  
4                                                                                  
11                                                                                 
66*/ 


