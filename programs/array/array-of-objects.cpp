#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    
    void setX(int i)
    {
        x = i;
    }

    int getX()
    {
        return x;
    }
};

int main()
{
    Demo obj[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        obj[i].setX(i);
    }
    
    for (i = 0; i < 4; i++)
    {
        cout << "obj[" << i << "].getX() : " << obj[i].getX() << endl;
    }
    
    return 0;
}

/*Output:
obj[0].getX() : 0
obj[1].getX() : 1
obj[2].getX() : 2
obj[3].getX() : 3*/

