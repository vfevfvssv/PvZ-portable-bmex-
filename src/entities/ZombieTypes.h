#pragma once
#include <string>
#include <vector>
struct ZombieType{std::string id,name;float hp,speed,damage;bool armored,shielded,fast,jumper,digger,balloon,boss;};
std::vector<ZombieType>getAllZombieTypes();
