#include <iostream>
using namespace std;

class Point{
private:
    int xpos, ypos;

public:
    Point(int x, int y) : xpos(x), ypos(y)
    { }
    // void Init(int x, int y){
    //     xpos = x;
    //     ypos = y;
    // }
    void ShowPointInfo() const{
        cout << "[" << xpos << "," << ypos << "]" << endl;
    }
};

class Circle{
private:
    int radius;
    Point center;

public:
    Circle(int x, int y, int r)
        :center(x, y)  // 객체 center의 생성 과정에서 x와 y를 인자로 전달받는 생성자를 호출하라
        { radius = r ;}
    // void Init(int x, int y, int r){
    //     radius = r;
    //     center.Init(x, y);
    // }
    void ShowCircleInfo() const{
        cout << "radius: " << radius << endl;
        center.ShowPointInfo();
    }
};

class Ring{
private:
    Circle inner_circle;
    Circle outer_circle;

public:
    Ring(int inner_x, int inner_y, int inner_r, int outer_x, int outer_y, int outer_r)
        : inner_circle(inner_x, inner_y, inner_r), outer_circle(outer_x, outer_y, outer_r) // 객체 inner_circle의 생성 과정에서 int형 3개를 인자로 받는 생성자를 호출하라
    {}
    // void Init(int inner_x, int inner_y, int inner_r, int outer_x, int outer_y, int outer_r){
    //     inner_circle.Init(inner_x, inner_y, inner_r);
    //     outer_circle.Init(outer_x, outer_y, outer_r);
    // }
    void ShowRingInfo() const{
        cout << "Inner Circle Info..." << endl;
        inner_circle.ShowCircleInfo();

        cout << "Outer Circle Info..." << endl;
        outer_circle.ShowCircleInfo();
    }
    
};

int main(void){
    Ring ring(1, 1, 4, 2, 2, 9);
    // ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}


// #include <iostream>
// using namespace std;

// class Point{
// private:
//     int xpos, ypos;

// public:
//     void Init(int x, int y){
//         xpos = x;
//         ypos = y;
//     }
//     void ShowPointInfo() const{
//         cout << "[" << xpos << "," << ypos << "]" << endl;
//     }
// };

// class Circle{
// private:
//     int radius;
//     Point center;

// public:
//     void Init(int x, int y, int r){
//         radius = r;
//         center.Init(x, y);
//     }
//     void ShowCircleInfo() const{
//         cout << "radius: " << radius << endl;
//         center.ShowPointInfo();
//     }
// };

// class Ring{
// private:
//     Circle inner_circle;
//     Circle outer_circle;

// public:
//     void Init(int inner_x, int inner_y, int inner_r, int outer_x, int outer_y, int outer_r){
//         inner_circle.Init(inner_x, inner_y, inner_r);
//         outer_circle.Init(outer_x, outer_y, outer_r);
//     }
//     void ShowRingInfo() const{
//         cout << "Inner Circle Info..." << endl;
//         inner_circle.ShowCircleInfo();

//         cout << "Outer Circle Info..." << endl;
//         outer_circle.ShowCircleInfo();
//     }
    
// };

// int main(void){
//     Ring ring;
//     ring.Init(1, 1, 4, 2, 2, 9);
//     ring.ShowRingInfo();
//     // Ring *ring = new Ring; // 동적 할당의 형태
//     // (*ring).Init(1, 1, 4, 2, 2, 9);
//     // ring->ShowRingInfo();
//     // delete ring;
//     return 0;
// }