#include <iostream>

using namespace std;


class Interface1 {
	virtual void newFunction() = 0;
};
// Base class
class Shape {
public:
	// pure virtual function providing interface framework.
	virtual int getArea() = 0;
	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

protected:
	int width;
	int height;
};

// Derived classes
class Rectangle : public Shape, Interface1 {
public:
	int getArea() {
		return (width * height);
	}
	void newFunction() override
	{
		return;
	}
};

class Triangle final : public Shape {

public:
	Triangle(int test)
	{
		width = test;
	}
	int getArea() {
		return (width * height) / 2;
	}

};

Triangle getStuff(int f)
{
	if (f > 5)
	{
		return Triangle{5};
	}
	else
	{
		return NULL;
	}
}






// C++ code to demonstrate the  
// working of for_each loop 

#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std;

// helper function 1 
void printx2(int a)
{
    cout << a * 2 << " ";
}

// helper function 2 
// object type function 
struct Class2
{
    void operator() (int a)
    {
        cout << a * 3 << " ";
    }
} ob1;


int main()
{
    // initializing array 
    int arr[5] = { 1, 5, 2, 4, 3 };

    cout << "Using Arrays:" << endl;

    // printing array using for_each 
    // using function 
    cout << "Multiple of 2 of elements are : ";
    for_each(arr, arr + 5, printx2);

    cout << endl;

    // printing array using for_each 
    // using object function 
    cout << "Multiple of 3 of elements are : ";
    for_each(arr, arr + 5, ob1);

    cout << endl;

    // initializing vector 
    vector<int> arr1 = { 4, 5, 8, 3, 1 };

    cout << "Using Vectors:" << endl;

    // printing array using for_each 
    // using function 
    cout << "Multiple of 2 of elements are : ";
    for_each(arr1.begin(), arr1.end(), printx2);

    cout << endl;

    // printing array using for_each 
    // using object function 
    cout << "Multiple of 3 of elements are : ";
    for_each(arr1.begin(), arr1.end(), ob1);

    cout << endl;
}


