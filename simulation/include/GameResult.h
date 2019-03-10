
#ifndef EXERC_BOXES_GAMERESULT_H
#define EXERC_BOXES_GAMERESULT_H

#include <array>
#include <memory>
#include <map>
#include "Reward.h"
#include "Base.h"


using std::string;
using std::map;
using std::shared_ptr;
typedef map<int, shared_ptr<Reward<int>>> MapSharedInts;
typedef map<string, shared_ptr<Reward<string>>> MapSharedStr;
typedef std::array<shared_ptr<Base>, 12> Boxes12;
typedef std::array<shared_ptr<Base>, 4> Boxes4;

class GameResult
{
    double count;
public:
    GameResult() : count(0) {};
    double Game_result(unsigned);
    Boxes12 init_main_rewards(MapSharedInts &int_boxes, MapSharedStr &str_boxes);
    Boxes4 init_endgame_rewards(MapSharedInts &int_boxes, MapSharedStr &str_boxes);
    void fun_2(Boxes4 Arr);
    void FirstStage(Boxes12 &F_stg_rewards);
    void SecondStage(Boxes4 &S_stg_rewards, Boxes12 &F_stg_rewards);
    MapSharedStr create_2();
    MapSharedInts create_1();
};

#endif //EXERC_BOXES_GAMERESULT_H
