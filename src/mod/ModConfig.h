#pragma once
#include <string>
#include <unordered_map>
struct ModConfig{
 bool modEnabled=true;bool showMenu=true;float menuScale=1.0f;
 float zombieHpMultiplier=2.0f;float zombieSpeedMultiplier=1.35f;float zombieDamageMultiplier=1.5f;
 float spawnRateMultiplier=1.8f;float waveIntensity=2.0f;
 float sunMultiplier=0.65f;bool infiniteSun=false;int startingSun=150;
 float plantDamageMultiplier=1.25f;float plantCooldownMultiplier=0.8f;bool allowPlantAbilities=true;
 bool showHitboxes=false;bool showFps=false;bool godMode=false;bool oneHitKill=false;bool freezeZombies=false;bool spawnDebugZombie=false;
 bool instantKill=false;bool noCooldown=false;bool autoCollect=false;bool fastForward=false;bool slowMotion=false;
 float gameSpeed=1.0f;float gravity=1.0f;float projectileSpeed=1.0f;float explosionRadius=1.0f;
 bool unlockAllPlants=false;bool unlockAllZombies=false;bool unlockAllLevels=false;bool infiniteCoins=false;
 bool spawnBoss=false;bool spawnWaveNow=false;bool clearZombies=false;bool healAllPlants=false;
 void load(const std::string&);void save(const std::string&)const;
 std::unordered_map<std::string,float>floats;std::unordered_map<std::string,bool>bools;
};
