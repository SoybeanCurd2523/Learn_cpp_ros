#include "Car.h"

void Calculator::Init(){
    AddCount = 0;
    MinCount = 0;
    MulCount = 0;
    DivCount = 0;
}

double Calculator::Add(double a, double b){
    AddCount++;
    return a+b;
}

double Calculator::Min(double a, double b){
    MinCount++;
    return a-b;
}

double Calculator::Mul(double a, double b){
    MulCount++;
    return a*b;
}

double Calculator::Div(double a, double b){
    if(b == 0) return 0.0;
    DivCount++;
    return a/b;
}

void Calculator::ShowOpCount(){
    cout << "덧셈: " << AddCount;
    cout << " 뺄셈: " << MinCount;
    cout << " 곱셈: " << MulCount;
    cout << " 나눗셈: " << DivCount << endl;
}


// void Car::InitMembers(char * ID, int fuel){
//     strcpy(gameID, ID);
//     fuelGauge = fuel;
//     curSpeed = 0;
// }

// void Car::ShowCarState(){ // 현재 상태 출력
//     cout << "소유자 ID : " << gameID << endl;
//     cout << "연료량 : " << fuelGauge << "%" << endl;
//     cout << "현재 속도 : " << curSpeed << "km/s" << endl << endl;
// }


// void Car::Accel(){
//     if(fuelGauge <= 0) 
//         return;
//     else    
//         fuelGauge -= CAR_CONST::FUEL_STEP;

//     if(curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
//         curSpeed = CAR_CONST::MAX_SPD;
//         return;
//     }

//     curSpeed += CAR_CONST::ACC_STEP;
// }

// void Car::Break(){ // 정지
//     if(curSpeed < CAR_CONST::BRK_STEP){
//         curSpeed = 0;
//         return;
//     }

//     curSpeed -= CAR_CONST::BRK_STEP;
// }