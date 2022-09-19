#include <iostream>
#include <cstring> // string.h
using namespace std;

class Person{
private: 
    char *name; // 멤버 변수
    int age;

public:
    Person(char *myname, int myage){ // 생성자
        cout << "called constructor" << endl;
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    Person(){ // 객체 배열 생성 시 void형 생성자가 호출된다. 
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }
    void SetPersonInfo(char *myname, int myage){ // 멤버 함수
        name = myname;
        age = myage;
    }
    void ShowPersonInfo() const {
        cout << "이름 : " << name << ", ";
        cout << "나이 : " << age << endl;
    }
    ~Person(){ // 소멸자
        delete[] name;
        cout << "called destructor" << endl;
    }
};

int main(){
    Person *parr[3]; // 객체 포인터 배열 : 객체의 주소 값 저장이 가능한 포인터 변수로 이뤄진 배열
    char namestr[100];
    int age;

    for(int i=0 ; i<3 ; i++){
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        parr[i] = new Person(namestr, age); // 객체를 생성해서, 이 객체의 주소 값을 배열에 저장하고 있다.
    }

    parr[0]->ShowPersonInfo();
    // (*parr)->ShowPersonInfo();
    parr[1]->ShowPersonInfo();
    parr[2]->ShowPersonInfo();

    delete parr[0]; // 총 3회에 걸쳐서 new 연산을 진행했으니, 총 3회에 걸쳐서 delete 연산을 진행해야 한다.
    delete parr[1];
    delete parr[2];

    return 0;
}

