#include <iostream>
#include <cstdlib>
#include <climits>  //이건 불필요한 include이다.
using namespace std;

int main()
{
  int testcase;
  cin >> testcase;

  int answer = 0;
  int A[100001] = {0};

  for(int i = 1; i<1001; i++){
    A[i] = rand() * 100;  //rand()를 그냥 사용하면 매 실행마다 같은 랜덤한 배열만 나온다.
  }

  for (int t = 1; t<testcase + 1; t++){
    int start, end;
    cin >> start >> end;  //배열의 최대 크기는 1000001이지만 start와 end가 이 수치보다 더 큰 수가 들어오면 오류가 발생할 수 있다.
    for(int i = start; i <= end; i++){
      answer += A[i];
    }
    cout << testcase << " " << answer;
      //testcase를 출력하고 싶은거라면 testcase가 아닌 t를 출력해야 한다.  <- 근데 이것도 오류로 봐야하나요?
      //구간합 문제인데 구간합을 출력한 뒤 결과를 초기화하지 않아 계속 더해지는 오류가 있다.
  }
}