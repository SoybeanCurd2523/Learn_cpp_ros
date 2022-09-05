#include <iostream>
#include "Rectangle.h"
using namespace std;


// bool Rectangle::InitMembers(const Point &ul, const Point &lr){
//     if(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
//         cout << "잘못된 위치정보 전달" << endl;
//         return false;
//     }
//     upLeft = ul;
//     lowRight = lr;
//     return true;
// }

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
            :upLeft(x1, y1), lowRight(x2, y2) // 맴버 이니셜라이저
            /* 객체 upleft의 생성 과정에서 x1과 y1을 인자로 전달받는 생성자를 호출하라
               객체 lowright의 생성 과정에서 x2와 y2를 인자로 전달받는 생성자를 호출하라
            */
{
    // empty
}

void Rectangle::ShowRecInfo() const{
    cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << ']' << endl;

    cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << ']' << endl << endl;
}

