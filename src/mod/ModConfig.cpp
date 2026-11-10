#include "ModConfig.h"
#include <fstream>
void ModConfig::load(const std::string&p){std::ifstream in(p);if(!in)return;std::string l;while(std::getline(in,l)){auto e=l.find('=');if(e==std::string::npos)continue;std::string k=l.substr(0,e),v=l.substr(e+1);if(v=="true"||v=="false")bools[k]=(v=="true");else{try{floats[k]=std::stof(v);}catch(...){}}}}
void ModConfig::save(const std::string&p)const{std::ofstream o(p);for(auto&[k,v]:bools)o<<k<<"="<<(v?"true":"false")<<"\n";for(auto&[k,v]:floats)o<<k<<"="<<v<<"\n";}
