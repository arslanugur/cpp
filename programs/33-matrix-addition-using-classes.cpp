#include<iostream>
using namespace std;

class Add{
public: void sum(int r, int c){
int m1[r][c], m2[r][c], s[r][c];

cout << "Enter the elements of first 1st matrix: ";

for (int i = 0;i<r;i++ ) {
for (int j = 0;j < c;j++ ) {

cin>>m1[i][j]; }

}

cout << "Enter the elements of second 2nd matrix: ";

for (int i = 0;i<r;i++ ) {
for (int j = 0;j<c;j++ ) {
cin>>m2[i][j]; }

}

cout<<"Output: ";
for (int i = 0;i<r;i++ ) {
for (int j = 0;j<c;j++ ) {
s[i][j]=m1[i][j]+m2[i][j];
cout<<s[i][j]<<" ";
} } }

};

int main(){
int row, col;
cout<<"Enter the number of rows(should be >1 and <10): ";
cin>>row;
cout<<"Enter the number of column(should be >1 and <10): ";
cin>>col;
Add obj;
obj.sum(row, col);
return 0;
}

/*
Output:
Enter the number of rows(should be >1 and <10): 2
Enter the number of column(should be >1 and <10): 3
Enter the elements of first 1st matrix:
  1 1 1
  1 1 1

Enter the elements of second 2nd matrix: 
5 5 5 
5 5 5

output:
6 6 6 
6 6 6 */


