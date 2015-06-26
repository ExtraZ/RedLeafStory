#pragma once
#include "../Global.h"

#include "../Renderer/RenderObject.h"

class PlayerObject
{
public:
	PlayerObject();
	virtual ~PlayerObject();

	std::map<RenderObject, string> playerObjects;
};
