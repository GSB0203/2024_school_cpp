#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int numOfPlayer =8;
const int score[] = {10, 8, 6, 5, 4, 3, 2, 1};

//선수 클래스- 팀종류(블루팀, 레드팀), 점수(10~0), 기록(숫자형 초단위로 바꾼값), 생성자, get/set 메서드들
class Player {
private:
    string teamType;
    int score;
    double record;

public:
    explicit Player(string teamType = "", int score = 0, double record = 0.0): teamType(std::move(teamType)), score(score), record(record) {}

    const string& getTeamType() const{
      return teamType;
    };
    void setTeamType(string teamType) {
      this->teamType = std::move(teamType);
    };

    int getScore() const {
      return score;
    };
    void setScore(int score) {
      this->score = score;
    };

    double getRecord() const {
      return record;
    };
    void setRecord(double record) {
      this->record = record;
    };
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
        if(redScore == blueScore) winner = players[0].getTeamType();
        else redScore > blueScore ? winner = "red" : winner = "blue";
      }
    };

public:
    explicit Game(string type = "", string winner = "", int redScore = 0, int blueScore = 0):type(std::move(type)), winner(std::move(winner)), players(numOfPlayer), redScore(redScore), blueScore(blueScore) {}
    static bool sortRank(const Player& p1, const Player& p2) {
      return p1.getRecord() < p2.getRecord();
    };

    void update() {
      //정렬
      std::sort(players.begin(), players.end(), sortRank);

      int order = 0;
      double bestRec = 0.0;

      for (auto &player: players) {
        if (order == 0) {
          bestRec = player.getRecord();
          player.setScore(score[order]);
        }
        else if (player.getRecord() >= bestRec + 10.0) player.setScore(0);
        else player.setScore(score[order]);

        if (player.getTeamType() == "blue") blueScore += player.getScore();
        else redScore += player.getScore();

        order++;
      }

      setWinner();
    }

    static double getTimeRecord(string strRec, char c) {
      string str;
      double dRec = 0.0;
      int token;
      token = strRec.find(c);
      str = strRec.substr(0, token);
      dRec = atof(str.c_str()) * 60;
      str = strRec.substr(++token, strRec.length());
      dRec += atof(str.c_str());
      return dRec;
    };

    const string& getType() const{
      return type;
    };
    void setType(string type) {
      this->type = std::move(type);
    };

    const string& getWinner() const {
      return winner;
    };

    vector<Player>& getPlayers() {
      return players;
    };
    void setPlayers(vector<Player> players) {
      this->players = std::move(players);
    };

    int getRedScore() const {
      return redScore;
    };
    void setRedScore(int redScore) {
      this->redScore = redScore;
    };

    int getBlueScore() const {
      return blueScore;
    };
    void setBlueScore(int blueScore){
      this->blueScore = blueScore;
    };
};


int main() {
  //테스트 케이스 수(t) 입력
  int t; cin>>t;
  //t개수 만큼 게임, 팀 종류 및 기록 입력받고 저장
  vector<Game> games(t);
  for(int i=0; i<t; i++) {
    //게임 종류 입력 및 저장
    string type; cin>>type;
    games[i].setType(type);
    //팀종류 및 기록 입력 저장
    for(int j=0;j<numOfPlayer;j++) {
      string team, rec;
      cin >> team >> rec;
      games[i].getPlayers()[j].setTeamType(team);
      games[i].getPlayers()[j].setRecord(Game::getTimeRecord(rec, ':'));
    }
  }
//게임 결과 출력
  for(auto &game : games) {
    game.update();
    cout<<game.getWinner()<<endl;
  }
  return 0;
}