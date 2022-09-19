#include <iostream>
using namespace std;

// encaps 2
class SinivelCap // 콧물 처치용 캡슐
{
public:
    void Take() const{
        cout << "콧물이 싹 납니다." << endl;
    }
};

class SneezeCap{ // 재채기 처치용 캡슐
public:
    void Take() const{
        cout << "재채기가 멎습니다." << endl;
    }
};

class SnuffleCap{ // 코막힘 처치용 캡슐
public:
    void Take() const {cout << "코가 뻥 뚫립니다." << endl;}
};

class CONTAC600{ // 감기약 클래스
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const{
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient{ // 감기 환자 클래스
public:
    void TakeCONTAC600(const CONTAC600 &cap) const{
        cap.Take();
    }
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTAC600(cap);

    return 0;
}


// Encaps1
// class SinivelCap // 콧물 처치용 캡슐
// {
// public:
//     void Take() const{
//         cout << "콧물이 싹 납니다." << endl;
//     }
// };

// class SneezeCap{ // 재채기 처치용 캡슐
// public:
//     void Take() const{
//         cout << "재채기가 멎습니다." << endl;
//     }
// };

// class SnuffleCap{ // 코막힘 처치용 캡슐
// public:
//     void Take() const {cout << "코가 뻥 뚫립니다." << endl;}
// };

// class ColdPatient{ // 감기 환자 클래스
// public:
//     void TakeSinivelCap(const SinivelCap &cap) const{
//         cap.Take();
//     }

//     void TakeSneezeCap(const SneezeCap &cap) const{
//         cap.Take();
//     }

//     void TakeSnuffleCap(const SnuffleCap &cap) const{
//         cap.Take();
//     }
// };

// int main(void)
// {
//     SinivelCap scap;
//     SneezeCap zcap;
//     SnuffleCap ncap;

//     ColdPatient sufferer;
//     sufferer.TakeSinivelCap(scap);
//     sufferer.TakeSneezeCap(zcap);
//     sufferer.TakeSnuffleCap(ncap);

//     return 0;
// }