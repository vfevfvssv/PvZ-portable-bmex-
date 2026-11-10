#include "ZombieTypes.h"
std::vector<ZombieType>getAllZombieTypes(){
 std::vector<ZombieType> v;
 auto add=[&](std::string id,std::string name,float hp,float sp,float dmg,bool a=false,bool s=false,bool f=false,bool j=false,bool d=false,bool b=false,bool bo=false){v.push_back({id,name,hp,sp,dmg,a,s,f,j,d,b,bo});};
 add("basic","Basic",100,1.0f,10);
 add("cone","Cone",180,1.0f,10,true);
 add("bucket","Bucket",300,0.9f,12,true);
 add("fast","Runner",80,2.0f,8,false,false,true);
 add("shield","Shielded",220,0.8f,10,false,true);
 add("jumper","Jumper",140,1.2f,14,false,false,false,true);
 add("digger","Digger",160,1.1f,12,false,false,false,false,true);
 add("balloon","Floater",120,1.3f,8,false,false,false,false,false,true);
 add("brute","Brute",400,0.7f,25,true);
 add("boss","Boss",1200,0.6f,40,true,true,false,false,false,false,true);
 for(int i=1;i<=40;i++){
  add("variant_"+std::to_string(i),"Variant "+std::to_string(i),100+i*10,1.0f+(i%5)*0.1f,10+i, i%3==0,i%4==0,i%5==0,i%6==0,i%7==0,i%8==0,i==40);
 }
 return v;}
