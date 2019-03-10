#include "GameResult.h"
#include <algorithm>

using std::string;
using std::map;
using std::shared_ptr;
using std::make_shared;
typedef map<int, shared_ptr<Reward<int>>> MapSharedInts;
typedef map<string, shared_ptr<Reward<string>>> MapSharedStr;
typedef std::array<shared_ptr<Base>, 12> Boxes12;
typedef std::array<shared_ptr<Base>, 4> Boxes4;

double GameResult::Game_result(const unsigned attempts)
{
        auto int_boxes = create_1(); //easily extensible pool of simulation with ints
        auto str_boxes = create_2(); //easily extensible pool of simulation with strings
        auto F_stg_rewards = init_main_rewards(int_boxes, str_boxes); // first stage rewards
        auto S_stg_rewards = init_endgame_rewards(int_boxes, str_boxes); // second stage rewards

        /* F_stg_rewards and S_stg_rewards filled with shared_ptrs for memory saving */

        for (auto p = 0; p < attempts; p++) {
            FirstStage(F_stg_rewards );
            SecondStage(S_stg_rewards, F_stg_rewards);
        }
        return (count / attempts);
}
Boxes12 GameResult::init_main_rewards(MapSharedInts &int_boxes,
                   MapSharedStr &str_boxes){
    Boxes12 F_stg_rewards;
    int c;
    for (c = 0; c < 5; c++) F_stg_rewards[c] = int_boxes[5];
    for (c = 5; c < 7; c++) F_stg_rewards[c] = int_boxes[20];
    for (c = 7; c < 8; c++) F_stg_rewards[c] = int_boxes[100];
    for (c = 8; c < 11; c++) F_stg_rewards[c] = (str_boxes)["Game over sign"];
    for (c = 11; c < 12; c++) F_stg_rewards[c] = str_boxes["Extra life"];
    return F_stg_rewards;
}

Boxes4 GameResult::init_endgame_rewards(MapSharedInts &int_boxes,
                     MapSharedStr &str_boxes){
    Boxes4 S_stg_rewards = {int_boxes[5], int_boxes[10], int_boxes[20], str_boxes["Second chance"]};
    return S_stg_rewards;

}

void GameResult::fun_2(Boxes4 Arr)
{
    for (auto &u: Arr) {
        if (u->comp(20)) {
            count += 20;
            break;
        } else if (u->comp(5)) {
            count += 5;
            break;
        } else if (u->comp(10)) {
            count += 10;
            break;
        } else continue;
    }
}

void GameResult::FirstStage(Boxes12 &F_stg_rewards) {
    short life = 0;
    random_shuffle(F_stg_rewards.begin(), F_stg_rewards.end());
    for (auto &i: F_stg_rewards) {
        if (i->comp("Game over sign") && (!life)) { break; }
        else if (i->comp(20)) { count += 20; }
        else if (i->comp(5)) { count += 5; }
        else if (i->comp(100)) { count += 100; }
        else if (i->comp("Extra life")) { life++; }
        else if (i->comp("Game over sign") && (life)) { life--; };
    }
}

void GameResult::SecondStage(Boxes4 &S_stg_rewards, Boxes12 &F_stg_rewards) {

    random_shuffle(S_stg_rewards.begin(), S_stg_rewards.end());
    for (auto &d: S_stg_rewards) {
        if (d->comp(20)) {
            count += 20;
            break;
        } else if (d->comp(5)) {
            count += 5;
            break;
        } else if (d->comp(10)) {
            count += 10;
            break;
        } else if (d->comp("Second chance")) {
            FirstStage(F_stg_rewards);
            fun_2(S_stg_rewards);
        }
        break;
    }
}

MapSharedInts GameResult::create_1() {
    MapSharedInts A1;
    A1.emplace(5, make_shared<Reward<int>>(5));
    A1.emplace(10, make_shared<Reward<int>>(10));
    A1.emplace(20, make_shared<Reward<int>>(20));
    A1.emplace(100, make_shared<Reward<int>>(100));
    return A1;
};

MapSharedStr GameResult::create_2() {
    MapSharedStr A2;
    A2.emplace("Game over sign", make_shared<Reward<string>>("Game over sign"));
    A2.emplace("Extra life", make_shared<Reward<string>>("Extra life"));
    A2.emplace("Second chance", make_shared<Reward<string>>("Second chance"));
    return A2;
};
