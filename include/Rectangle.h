#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle{
private:
    Point upLeft; // 직사각형의 좌상단
    Point lowRight; // 우하단

public:
    // 좌상단과 우하단의 좌표가 뒤바뀌는 것을 검사하는 내용
    // bool InitMembers(const Point &ul, const Point &lr);

    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2); // 생성자
    void ShowRecInfo() const;
};

#endif // RECTANGLE_H