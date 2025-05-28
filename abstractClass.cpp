#include <iostream>
#define PI 3.1416
using namespace std;
class shape
{
public:
    float area;
    virtual void display() = 0;
};
class rectanguler : public shape
{
private:
    int l, w;

public:
    rectanguler(int a, int b)
    {
        l = a, w = b;
        area = l * w;
    }
    void display()
    {
        cout << "Rectanguler area= " << area << endl;
    }
};
class circle : public shape
{
private:
    float r;

public:
    circle(float e)
    {
        r = e;
        area = PI * r * r;
    }
    void display()
    {
        cout << "Circle area= " << area << endl;
    }
};
int main()
{
    int a, b;
    cout << "Input length & width: ";
    cin >> a >> b;
    rectanguler t(a, b);
    float r;
    cout << "input diameter: ";
    cin >> r;
    circle c(r);
    cout << endl;
    t.display();
    c.display();
}