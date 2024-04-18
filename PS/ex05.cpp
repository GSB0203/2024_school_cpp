//1 1900, 남 2 1900, 여 3 2000, 남 4 2000, 여
//입력설명 첫 줄에 주민등록증 번호가 입력
//출력설명 첫줄에 나이 성별 공백 구분 출력 남자 M 여자 W
//780316-2376152
//46 W
//올해는 2023년

#include <iostream>

using namespace std;

int main() {
  char year[20];
  int age;
  char gender;
  scanf("%s", year);
  if((year[7] == '1') || (year[7] == '3')) gender = 'M';
  else gender = 'W';

  if(year[7] == '1' || year[7] == '2') age = 2023 - (1900 + (((year[0] - 48) * 10) + (year[1] - 48))) + 1;
  else age = 2023 - (2000 + (((year[0] - 48) * 10) + (year[1] - 48))) + 1;
  printf("%d, %c", age, gender);
}