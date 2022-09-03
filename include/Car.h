#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <cstring> // strcpy
#include "Car.h"
using namespace std;

class Calculator{
private:
    int AddCount; // 몇 번 계산했는지
    int MinCount;
    int MulCount;
    int DivCount;

public:
    void Init();
    double Add(double, double); // 더하기
    double Min(double, double); // 빼기
    double Mul(double, double); // 곱하기
    double Div(double, double); // 나누기
    void ShowOpCount();
};




// // namespace CAR_CONST에 구조체 Car에서 사용하는 상수들을 모두 모다 놓았다.
// namespace CAR_CONST{
//     enum{
//         ID_LEN    = 20,
//         MAX_SPD   = 200,
//         FUEL_STEP = 2,
//         ACC_STEP  = 10,
//         BRK_STEP  = 10
//     };
// }

// class Car{
// private:
//     char gameID[CAR_CONST::ID_LEN]; // 소유자 ID
//     int fuelGauge; // 연료량
//     int curSpeed; // 현재 속도

// public:
//     void InitMembers(char * ID, int fuel);
//     void ShowCarState(); // 현재 상태 출력
//     void Accel(); // 가속
//     void Break(); // 정지
// };

#endif // CAR_H