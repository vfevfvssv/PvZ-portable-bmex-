#include "PlantAbilities.h"
std::vector<PlantAbility>getAllPlantAbilities(){
 std::vector<PlantAbility> v;
 auto add=[&](std::string id,std::string name,float dmg,float cd,bool sp=false,bool sl=false,bool kb=false,bool sh=false,bool ch=false,bool rv=false){v.push_back({id,name,dmg,cd,sp,sl,kb,sh,ch,rv});};
 add("basic_shot","Basic Shot",20,1.5f);
 add("splash","Splash",25,2.0f,true);
 add("slow","Slow Field",10,3.0f,false,true);
 add("knockback","Knockback",18,2.5f,false,false,true);
 add("shield","Shield",0,5.0f,false,false,false,true);
 add("chain","Chain Damage",22,2.2f,false,false,false,false,true);
 add("revive","Revive",0,10.0f,false,false,false,false,false,true);
 for(int i=1;i<=20;i++){
  add("ability_"+std::to_string(i),"Ability "+std::to_string(i),15+i,1.0f+(i%5)*0.2f, i%3==0,i%4==0,i%5==0,i%6==0,i%7==0,i%8==0);
 }
 return v;}
