#include<iostream>
using namespace std;

int main()
{
    int startNum,endNum;
    int found=0,count=0,i,j;

    bool b[1000];

    cout<<"Enter number START of range : ";
    cin>>startNum;
    cout<<"Enter number END of range : ";
    cin>>endNum;

    for(i=2;i<endNum;i++)
    {
            b[i]=true;
    }

    cout<<"Prime number from "<<startNum<<" to "<<endNum<<" : "<<endl;

    for(i=startNum;i<endNum;i++)
    {
        if(b[i])
        {
            cout<<i<<" ";
            for(j=i*2;j<endNum;j+=i)
            {
                b[j]=false;
            }
        }
    }

    return 0;
}

/*
Output:
Enter number START of range : 1
Enter number END of range : 30
Prime number from 1 to 30 : 
2 3 5 7 11 13 17 19 23 29 
*/
  
  
