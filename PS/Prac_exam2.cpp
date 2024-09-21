#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int numOfPlayer =8;
const int score[] = {10, 8, 6, 5, 4, 3, 2, 1};

//선수 클래스- 팀종류(블루팀, 레드팀), 점수(10~0), 기록(숫자형 초단위로 바꾼값), 생성자, get/set 메서드들
class Player {
private:
    //팀 종류(red,  blue)
    string teamType;
    //점수(10 ~ 0)
    int score;
    //기록(초단위로 바꾼값)
    double record;
public:
    //생성자
    explicit Player(string teamType="", int score=0, double record=0.0) : teamType(std::move(teamType)), score(score), record(record) {}
    //get, set 메서드들
    const string &getTeamType() const {
      return teamType;
    }

    void setTeamType(const string &teamType) {
      Player::teamType = teamType;
    }

    int getScore() const {
      return score;
    }

    void setScore(int score) {
      Player::score = score;
    }

    double getRecord() const {
      return record;
    }

    void setRecord(double record) {
      Player::record = record;
    }
public:

};

//게임 클래스- 게임종류(스피드전, 아이템전), 이긴팀(blue or red), 선수배열(벡터), 팀별 점수합계(blue, red), 승자 세팅(아이템전 -player[0]의 팀에 따라 결정, 스피드전 - 두 팀의 합산스코어를 비교), 생성자, 정렬기준(오름차순), 기록에 따른 점수처리, 문자열기록(xx:xx.xx) -> 숫자 기록(xxx초)으로 변경, get/set 메서드들
class Game {
private:
    string type;
    string winner;
    vector<Player> players;
    int redScore, blueScore;

    void setWinner() {
      if(type == "item") winner = players[0].getTeamType();
      else {
        if (redScore == blueScore) winner = players[0].getTeamType();
        else redScore > blueScore ? winner = redScore : winner = blueScore;
      }
    }
public:

    static bool sortRank(Player& p1, Player& p2) {
      return p1.getScore() < p2.getScore();
    }

    void update() {
      sort(players.begin(), players.end(), sortRank);

      int order = 0;
      double bestRec = 0.0;

      for (auto &player: players) {
        if (order == 0) {
          bestRec = player.getRecord();
          player.setScore(score[order]);
        }
        else if(player.getRecord() >= bestRec + 10) player.setScore(0);
        else player.setScore(score[order]);

        if(player.getTeamType() == "blue") blueScore += player.getScore();
        else redScore += player.getScore();
      }
      setWinner();
    }

    static double getTimeRecord(const string& strRec, char c) {
      int token;

};


int main() {
  //테스트 케이스 수(t) 입력

  //t개수 만큼 게임, 팀 종류 및 기록 입력받고 저장

  for(int i=0; i<t; i++) {
    //게임 종류 입력 및 저장

    //팀종류 및 기록 입력 저장

  }
}
//게임 결과 출력

return 0;
}