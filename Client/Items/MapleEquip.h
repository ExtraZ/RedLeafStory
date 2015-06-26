#pragma once

#include "MapleItem.h"
#include "MapleEquipStat.h"

enum MapleEquipReqJobBranch
{
	WARRIOR,
	BOWMAN,
	THIEF,
	MAGICIAN,
	PIRATE,
	OTHER
};

class MapleEquip : public MapleItem
{
public:
	MapleEquip() { this->itemClassification = MapleItemClass::EQUIPMENT;  }
	~MapleEquip() {}

protected:
	union equipRequirements
	{
		unsigned short reqLevel;
		unsigned short reqStr;
		unsigned short reqDex;
		unsigned short reqLuk;
		unsigned short reqInt;
		unsigned short reqFame;
		MapleEquipReqJobBranch reqJob;
	};

	bool upgradeableEquip;
	unsigned char  equipLevel;
	unsigned short equipExp;

	// TODO: make MapleEquipStat class generic for minimal code.
	vector<MapleEquipStat> equipStats;



};