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
    Person parr[3]; // 객체 배열 
    // Person *parr = new Person[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    for(int i=0 ; i<3 ; i++){
        cout << "이름 : ";
        cin >> namestr;
        cout << "나이 : ";
        cin >> age;
        len = strlen(namestr) +1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }
    
    parr[0].ShowPersonInfo();
    parr[1].ShowPersonInfo();
    parr[2].ShowPersonInfo();

    // delete[] parr;

    return 0;
}

