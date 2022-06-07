// 01. Structs
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name, last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}





// 02. Class
#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int a) {
            age = a;
        }
        void set_standard(int s) {
            standard = s;
        }
        void set_first_name(string name) {
            first_name = name;
        }
        void set_last_name(string name) {
            last_name = name;
        }
        int get_age() {
            return age;
        }
        int get_standard() {
            return standard;
        }
        string get_first_name() {
            return first_name;
        }
        string get_last_name() {
            return last_name;
        }
        string to_string() {
            stringstream ss;
            char c = ',';
            ss << age << c << first_name << c << last_name << c << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


// 03. Classes and Objects
class Student {
    private:
    vector<int> scores = vector<int>(5);
    
    public:
    void input() {
        for (int i = 0; i < 5; i++)
            cin >> scores[i];
    }
    
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += scores[i];
        return sum;
    }
};


// 04. Box It!
class Box {
    int l, b, h;
    
    public:
        Box() {
            l = 0, b = 0, h = 0;
        }
        Box(int nl, int nb, int nh) {
            l = nl, b = nb, h = nh;
        }
        Box(const Box& box) {
            l = box.getLength();
            b = box.getBreadth();
            h = box.getHeight();
        }
    
        int getLength() const {return l;}
        int getBreadth() const {return b;}
        int getHeight() const {return h;}
    
        long long CalculateVolume() {
            long long ret = l;
            ret *= b;
            ret *= h;
            return ret;
        }
        bool operator<(const Box& box) {
            bool ret = false;
            if (l < box.getLength())
                ret = true;
            else if (l == box.getLength() && b < box.getBreadth())
                ret = true;
            else if (l == box.getLength() && l == box.getBreadth() && h < box.getHeight())
                ret = true;
           return ret; 
        }
        friend std::ostream& operator<<(ostream& out, const Box& B);
};

std::ostream& operator<<(std::ostream& out, const Box& box) {
    out << box.getLength() << ' ' << box.getBreadth() << ' ' << box.getHeight();
    return out;  
}
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)



// 05. Inherited Code
class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int errornumber) {
            n = errornumber;
        }
    
        int what() {return n;}
};


// 06. Exceptional Server
try {
    Server s;
    int ret = s.compute(A, B);
    cout << ret << endl;
} 
catch (bad_alloc& error) {
    cout << "Not enough memory" << endl;
}
catch (exception& error) {
    cout << "Exception: " << error.what() << endl;
}
catch (...) {
    cout << "Other Exception" << endl;
}


// 07. Virtual Functions
class Person {
public:
    string name;
    int age;
    virtual void getdata() {
        cin >> this->name >> this->age;
    }
    virtual void putdata() {
        cout << this->name << " " << this->age << endl;
    }
};

class Professor : public Person {
public:
    Professor() {
        this->cur_id = ++id;
    }
    int publications;
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age >> this->publications;
    }
    void putdata() {
        cout << this->name << " "
            << this->age << " "
            << this->publications << " "
            << this->cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person {
#define NUM_OF_MARKS 6
public:
    Student() {
        this->cur_id = ++id;
    }
    int marks[NUM_OF_MARKS];
    static int id;
    int cur_id;
    void getdata() {
        cin >> this->name >> this->age;
        for (int i=0; i<NUM_OF_MARKS; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        int marksSum = 0;
        for (int i=0; i<NUM_OF_MARKS; i++) {
            marksSum += marks[i];
        }
        cout << this->name << " "
            << this->age << " "
            << marksSum << " "
            << this->cur_id << endl;
    }
};
int Student::id = 0;



