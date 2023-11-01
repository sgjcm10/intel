#include <iostream>
#define MIN(x,y)   (((x)>(y))?(y):(x))
#define MAX(x,y)   (((x)<(y))?(y):(x))

class Point
{
private:   //접근 지시자 (외부 참조 불가)

public:    //    "    (외부 참조 불가)

    int x, y;   // 멤버 변수 선언. 객체(나 자신)의 좌표
        // 생성자 정의, Void int double 아닌 Point / 함수적 특성 (default, Overload 등)
    Point(int x1 = 0, int y1 = 0) : x(x1 + 1), y(y1 + 1) // initializer
    //{
    //    //x = x1;, y = y1;
    //}

    double Dist(Point p)  // 멤버 함수 : 두 점간의 거리 계산. Double  값으로  return
     {
        int w = x - p.x;
        int h = y - p.y;
        return sqrt(w * w + h * h); // 실전에서는 double 대신에  return을 넣어 끝내버림 즉,  return d;는 안 적어도 됨.
     }
    double Dist(Point p1, Point p2)  // 멤버 함수 : 두 점(자신을 제외한)간의 거리 계산. Double  값으로  return
    {
        int w = p1.x - p2.x;
        int h = p1.y - p2.y;
        double d = sqrt(w * w + h * h); // 실전에서는 double 대신에  return을 넣어 끝내버림 즉,  return d;는 안 적어도 됨.
        return d;
    }
};

class Rect
{

public:
    Point p11, p22;           //클래스 변수 선언
    Point LL, LR, UL, UR;
    Rect(Point p1, Point p2)
    {
        /*int xl = MIN(p1.x p2.x);
        int xr = MAX(p1.x p2.x);
        int yl = MIN(p1.y p2.y);
        int yu = MAX(p1.y p2.y);
        LL = Point(xl, yl);
        LR = Point(xr, yl);
        UL = Point(xr, yu);
        UR = Point(xr, yu);*/
        p11 = p1; p22 = p2;
    }
    Point GetLL()
    {
        return Point = Point(MIN(p11.x, p22.x), MIN(p11.y, p22.y));
    }
    Point GetLR()
    {
        return Point = Point(MAX(p11.x, p22.x), MAX(p11.y, p22.y));
    }
    Point GetUL()
    {
        return Point = Point(MIN(p11.x, p22.x), MIN(p11.y, p22.y));
    }
    Point GetUR()
    {
        return Point = Point(MAX(p11.x, p22.x), MAX(p11.y, p22.y));
    }
};



void PrintP(Point p)
{
    printf("Point(%d, %d)", p.x, p.y);
}

int main()
{
        Point p1, p2(10, 10), p3(20, 30), p4;
        p4 = p3;
        double d = p1.Dist(p2);
        double d1 = p2.Dist(p3);
        double d2 = p1.Dist(p2,p3);
        PrintP(p1);     PrintP(p2);     PrintP(p3);
        PrintP(p4);
        printf("점간의 거리 계산 : \nd(p1, p2) = %.2f  d1(p2,p3) = %.2f   d2(p2,p3) = %.2f", d, d1, d2);

        Rect r(p2, p3);
        Printf("두 점 \n")
        PrintP(p2);
        PrintP(p3);
        Printf("에 의해 정의된 사각형의 꼭지점의 좌표는\n");
        PrintP(r.GETLL());
        PrintP(r.GETLR());
        PrintP(r.GETUL());
        PrintP(r.GETUR());
}

};






int main()
{
    printf("Hello World!\n");
}
