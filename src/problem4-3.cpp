#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
    enum{
        CLERK=0, SENIOR, ASSIST, MANAGER // 사원, 주임, 대리, 과장
    };

    void ShowPositionInfo(int pos){
        switch(pos){
            case CLERK:
                cout << "사원" << endl;
                break;
            case SENIOR:
                cout << "주임" << endl;
                break;
            case ASSIST:
                cout << "대리" << endl;
                break;
            case MANAGER:
                cout << "과장" << endl;
        }
    }
}

class NameCard{
private:
    char *name;    // 성명
    char *company; // 회사이름
    char *phone;   // 전화번호
    int position;  // 직급
    
public:
    NameCard(char *_name, char *_company, char *_phone, int pos)
        : position(pos)
    {   
        cout << "called constructor" << endl;
        
        name = new char[strlen(_name) + 1];
        strcpy(name, _name);
        
        company = new char[strlen(_company) + 1];
        strcpy(company, _company);

        phone = new char[strlen(_phone) + 1];
        strcpy(phone, _phone);
    }

    void ShowNameCardInfo(){
        cout << "이름: " << name << endl; 
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(position);
        cout << endl;
    }

    ~NameCard(){
        cout << "called destructor" << endl;
        delete[] name;
        delete[] company;
        delete[] phone;
    }
};

int main(void){
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}