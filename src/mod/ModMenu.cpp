#include "ModMenu.h"
#include <imgui.h>
void ModMenu::toggle(){visible=!visible;}
bool ModMenu::isVisible()const{return visible;}
void ModMenu::draw(ModConfig&cfg){
 if(!visible)return;
 ImGui::SetNextWindowSize(ImVec2(520,620),ImGuiCond_FirstUseEver);
 ImGui::Begin("Mod Menu",&visible);
 if(ImGui::BeginTabBar("tabs")){
  if(ImGui::BeginTabItem("General")){ImGui::Checkbox("Mod Enabled",&cfg.modEnabled);ImGui::Checkbox("Show Menu",&cfg.showMenu);ImGui::SliderFloat("Menu Scale",&cfg.menuScale,0.5f,2.0f);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Difficulty")){ImGui::SliderFloat("Zombie HP",&cfg.zombieHpMultiplier,0.5f,10.0f);ImGui::SliderFloat("Zombie Speed",&cfg.zombieSpeedMultiplier,0.5f,5.0f);ImGui::SliderFloat("Zombie Damage",&cfg.zombieDamageMultiplier,0.5f,5.0f);ImGui::SliderFloat("Spawn Rate",&cfg.spawnRateMultiplier,0.5f,5.0f);ImGui::SliderFloat("Wave Intensity",&cfg.waveIntensity,0.5f,5.0f);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Economy")){ImGui::SliderFloat("Sun Multiplier",&cfg.sunMultiplier,0.1f,3.0f);ImGui::Checkbox("Infinite Sun",&cfg.infiniteSun);ImGui::InputInt("Starting Sun",&cfg.startingSun);ImGui::Checkbox("Infinite Coins",&cfg.infiniteCoins);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Plants")){ImGui::SliderFloat("Plant Damage",&cfg.plantDamageMultiplier,0.5f,5.0f);ImGui::SliderFloat("Plant Cooldown",&cfg.plantCooldownMultiplier,0.2f,3.0f);ImGui::Checkbox("Allow Abilities",&cfg.allowPlantAbilities);ImGui::Checkbox("No Cooldown",&cfg.noCooldown);ImGui::Checkbox("Heal All Plants",&cfg.healAllPlants);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Zombies")){ImGui::Checkbox("Freeze Zombies",&cfg.freezeZombies);ImGui::Checkbox("One Hit Kill",&cfg.oneHitKill);ImGui::Checkbox("Instant Kill",&cfg.instantKill);ImGui::Checkbox("Spawn Debug Zombie",&cfg.spawnDebugZombie);ImGui::Checkbox("Spawn Boss",&cfg.spawnBoss);ImGui::Checkbox("Clear Zombies",&cfg.clearZombies);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Waves")){ImGui::Checkbox("Spawn Wave Now",&cfg.spawnWaveNow);ImGui::SliderFloat("Wave Intensity",&cfg.waveIntensity,0.5f,5.0f);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Debug")){ImGui::Checkbox("Show Hitboxes",&cfg.showHitboxes);ImGui::Checkbox("Show FPS",&cfg.showFps);ImGui::Checkbox("God Mode",&cfg.godMode);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Cheats")){ImGui::Checkbox("Unlock All Plants",&cfg.unlockAllPlants);ImGui::Checkbox("Unlock All Zombies",&cfg.unlockAllZombies);ImGui::Checkbox("Unlock All Levels",&cfg.unlockAllLevels);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Visual")){ImGui::SliderFloat("Game Speed",&cfg.gameSpeed,0.2f,3.0f);ImGui::SliderFloat("Gravity",&cfg.gravity,0.2f,3.0f);ImGui::SliderFloat("Projectile Speed",&cfg.projectileSpeed,0.2f,3.0f);ImGui::SliderFloat("Explosion Radius",&cfg.explosionRadius,0.5f,3.0f);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Audio")){ImGui::Checkbox("Mute All",&cfg.modEnabled);ImGui::EndTabItem();}
  if(ImGui::BeginTabItem("Save/Load")){ImGui::Checkbox("Auto Save",&cfg.modEnabled);ImGui::EndTabItem();}
  ImGui::EndTabBar();}
 ImGui::End();}
