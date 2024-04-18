#include <iostream>

using namespace std;

  //함수, 변수 이름 네이밍 컨벤션
  //camel 표기법 : 제일 앞글자 소문자 띄워지는 부분만 대문자
  //클래스 네이밍 컨벤션
  //Pascal 표기법 : 제일 앞글자 대문자 띄워지는 부분도 대문자
void showMenu();
void makeAccount();
void depositMoney();
void withdrawMoney();
void showAllAccInfo();

enum {
    MAKE = 1, DEPOSIT = 2, WITHDRAW = 3, INQUIRE = 4, EXIT = 5
};

const int MAX_ACC_NUM = 100;
const int NAME_LEN = 10;

typedef struct {
    int accountNumber;
    int balance;
    char cusName[NAME_LEN];
}Account;

Account accArr[MAX_ACC_NUM];
int accNum = 0;

int main() {
  int choice;
  while(true) {
    showMenu();
    cout<<"select : "; cin>>choice;
    cout<<endl;

    switch(choice) {
      case MAKE:
        makeAccount();
        break;
      case DEPOSIT:
        depositMoney();
        break;
      case WITHDRAW:
        withdrawMoney();
        break;
      case INQUIRE:
        showAllAccInfo();
        break;
      case EXIT:
        return 0;
      default:
        cout<<"Illegal selection"<<endl;
    }
  }
}

void showMenu() {
  cout<<"-----menu-----"<<endl;
  cout<<"1. newAccount"<<endl;
  cout<<"2. deposit"<<endl;
  cout<<"3. withdraw"<<endl;
  cout<<"4. allPrintAccount"<<endl;
  cout<<"5. Exit"<<endl;
  //
}

void makeAccount() {
  cout<<"[newAccount]"<<endl;
  cout<<"accountID: "; cin>>accArr[accNum].accountNumber;
  cout<<""<<endl;
  cout<<"name: "; cin>>accArr[accNum].cusName;
  cout<<""<<endl;
  cout<<"deposit: "; cin>>accArr[accNum].balance;
  cout<<""<<endl;
  accNum += 1;
}

void withdrawMoney() {
  int findId;
  int money;
  //실행예시
  cout<<"[출   금]"<<endl;
  //계좌ID : 226
  cout<<"accountID: "; cin>>findId;
  cout<<""<<endl;

  for(int i=0;i<accNum;i++) {
    if (findId == accArr[i].accountNumber) {
      //총금액 : 30000
      cout << "withdraw: "; cin >> money;
      cout<<""<<endl;

      //잔액부족 or 출금완료
      if (accArr[i].balance >= money) {
        cout << "completed" << endl;
        accArr[i].balance -= money;
      } else cout << "InsufficientBalance" << endl;
      break;
    } else cout << "noID." << endl;
    cout << "" << endl;
  }
}

void depositMoney() {
  int findId;
  int money;
  //실행예시
  //[입   금]
  cout<<"[withdraw]"<<endl;

  //계좌ID : 226
  cout<<"accountID: "; cin>>findId;
  cout<<""<<endl;

  //입금액 : 30000
  for(int i=0;i<accNum;i++) {
    if (findId == accArr[i].accountNumber) {

      //총금액 : 30000
      cout << "withdrawalAmount: " << endl;
      cin >> money;
      accArr[i].balance += money;

      //입금완료
      cout << "completed" << endl;
      break;

    } else cout << "noID" << endl;
    cout << "" << endl;
    //
  }

}



void showAllAccInfo() {

    for(int i=0;i<accNum;i++) {
      cout<<"accountID :"<<accArr[i].accountNumber<<endl;
      cout<<"name :"<<accArr[i].cusName<<endl;
      cout<<"balance :"<<accArr[i].balance<<endl;
      cout<<""<<endl;
    }
  }
  //실행예시
  //계좌ID : 226
  //이름 : 김승빈
  //잔액 : 20000
  //
  // 계좌ID : 123
  //이름 : 김오빛
  //잔액 : 21000
  //