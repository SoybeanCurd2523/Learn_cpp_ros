#include <iostream>
using namespace std;

class FruitSeller{ // 사과장수
private:
    int APPLE_PRICE; // 멤버 변수, 사과의 값은 변하지 않으므로 대문자로 적었다.
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money){
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int SaleApples(int money){
        int num = money / APPLE_PRICE; // 사과의 개수는 정수개이다.
        numOfApples -= num;
        myMoney += money;
        return num;
    }
    int ShowSalesResult(){
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myMoney << endl;
    }
};

class FruitBuyer{ // 사과를 사는 사람
    int myMoney; // class는 private가 기본 접근제어지시자이다.
    int numOfApples;

public:
    void InitMembers(int money){
        myMoney = money;
        numOfApples = 0;
    }
    void BuyApples(FruitSeller &seller, int money){
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowBuyResult(){
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl;
    }
};

int main(void){
    FruitSeller seller;
    FruitBuyer buyer;

    seller.InitMembers(1000, 20, 0);
    buyer.InitMembers(5000);

    buyer.BuyApples(seller, 2000); // 과일의 구매

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();

    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}