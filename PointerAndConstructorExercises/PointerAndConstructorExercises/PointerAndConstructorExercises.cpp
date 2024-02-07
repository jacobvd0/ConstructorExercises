#include <iostream>
#include "Player.h"

int main()
{
    std::cout << "Hello World!\n";
    Player player(10);
    std::cout << player.max_health << "\n";
    player.~Player();
}
