#ifndef THEGAME_TASK_HPP
#define THEGAME_TASK_HPP

#include <TheGame/Game/Player.hpp>
#include <TheGame/Game/GameState.hpp>

#include <vector>

namespace TheGame
{
class Task
{
public:
    using Arr = std::vector<Task>;

public:
    Task(Player& player);

    virtual void Process(GameState& state) = 0;

protected:
    Player& player_;
};
}

#endif  // THEGAME_TASK_HPP
