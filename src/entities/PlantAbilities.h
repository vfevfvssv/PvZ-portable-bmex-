#pragma once
#include <string>
#include <vector>
struct PlantAbility{std::string id,name;float damage,cooldown;bool splash,slow,knockback,shield,chain,revive;};
std::vector<PlantAbility>getAllPlantAbilities();
