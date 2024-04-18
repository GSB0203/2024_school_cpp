#include <iostream>
using namespace std;

class FruitSeller {
private:
    //사과의 가격
    const int APPLE_PRICE = 1000;
    //사과의 개수
    int numOfApple;
    //재산
    int myMoney;
public:
    //생성자
    FruitSeller(const int &num, const int &money)
    :numOfApple{num}, myMoney{money} {}
    //사과 판매(입력:돈, 실행:돈/사과의가격 = 사과의개수 사과장수의 사과개수에서 빼기, 사과장수의 재산에서 받은  돈을 더하기, 반환:사과의 개수)
    int saleApple(const int &money) {
      int num = money / APPLE_PRICE;
      numOfApple -= num;
      myMoney += money;
      return num;
    }
    //판매현황
    void showSaleResult() const{
      cout<<"남은 사과: "<<numOfApple<<endl;
      cout<<"판매 수익: "<<myMoney<<endl;
    }
};

class FruitBuyer {
private:
    //재산
    int myMoney;
    //사과의 개수
    int numOfApple = 0;
public:
    //생성자
    FruitBuyer(const int &money):myMoney{money} {}
    //사과구매(입력:판매자객체, 얼마너치돈, 실행:판매자객체의 사과판매를 호출 사과를 반환받고 그만큼 사과개수를 더하면된다. 재산은 감소(얼마너치돈), 반환:없음)
    void buyApples(FruitSeller &seller, const int &money) {
      int num = seller.saleApple(money);
      numOfApple += num;
      myMoney -= money;
    }
    //구매현황
    void showBuyResult() const {
      cout<<"사과 개수: "<<numOfApple<<endl;
      cout<<"현재 잔액: "<<myMoney<<endl;
    }
};


int main() {
  FruitSeller seller1(20, 5000);
  FruitSeller seller2(20, 6000);
  FruitBuyer buyer1(5000);
  FruitBuyer buyer2(5000);
  buyer1.buyApples(seller1, 2000);
  cout<<"과일 판매자들의 현황"<<endl;
  seller1.showSaleResult();
  seller2.showSaleResult();
  cout<<"과일 구매자들의 현황"<<endl;
  buyer1.showBuyResult();
  buyer2.showBuyResult();
  return 0;
}
