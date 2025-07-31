#include <iostream>
using namespace std;
class line
{
    float m1, m2, c1, c2;

public:
    void line1(void);
    void line2(void);
    void solution(line o1, line o2);
};
void line ::line1(void)
{
    cout << "Enter the slop of line 1 " << endl;
    cin >> m1;
    cout << "Enter the y intercept of line 1 " << endl;
    cin >> c1;
    cout << "Your line is " << "y = " << m1 << "x + " << c1 << endl;
}
void line ::line2(void)
{
    cout << "Enter the slop of line 2 " << endl;
    cin >> m2;
    cout << "Enter the y intercept of line 2 " << endl;
    cin >> c2;
    cout << "your line is " << "y = " << m2 << "x + " << c2 << endl;
}
void line ::solution(line o1, line o2)
{
    if(m1==m2){
        cout<<"they are parallel lines"<<endl;
    }
    else{
    // ye purple wala bracket lagana nahi lagaya tha
    float x = (((o2.c2) - (o1.c1)) / ((o1.m1) - (o2.m2)));
    float y = (((o1.m1) * (o2.c2) - (o2.m2) * (o1.c1)) / (o1.m1 - o2.m2));
    cout << "Solution of equations is (x,y) = " << "(" << x << "," << y << ")" << endl;
    }
}

int main()
{

    line eq1, eq2, point;
    // function call karte time () ye bracket nahi laga raha tha
    eq1.line1();
    eq2.line2();
    // solution wala function run karne ke liye point karle ek object bana padega direct solution (eq1,eq2) nahi kar sakte
    point.solution(eq1, eq2);

    return 0;
}
