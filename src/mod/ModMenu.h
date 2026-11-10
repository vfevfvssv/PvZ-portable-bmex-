#pragma once
#include "ModConfig.h"
class ModMenu{public:void toggle();void draw(ModConfig&);bool isVisible()const;private:bool visible=true;int page=0;};
