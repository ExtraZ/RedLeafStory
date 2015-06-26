#pragma once

#include "Global.h"
#include "../WZ/MapleImage.h"

enum MapleItemClass { EQUIPMENT, USEABLE, ETC, SETUP, CASH };
enum MapleItemFlags { TRADEABLE, UNTRADEABLE, EQUIPTRADEBLOCK, ONEOFKIND, ACCOUNTSHARING, SHARABLEONCE, NOTSHARABLE };

class MapleItem
{
public:
	MapleItem() : initialized(false) {}
	MapleItem(unsigned int id, string name, MapleItemClass classification, int quantity = 1, bool isCash = 0)
		: itemId(id), itemName(name), itemClassification(classification), itemQuantity(quantity), isCashItem(isCash) {
		if (itemClassification == MapleItemClass::CASH)
			isCashItem = true;
		else if (itemClassification == MapleItemClass::EQUIPMENT)
			maxQuantity = 1;
		MapleItem();

		initialized = true;
	}
	virtual ~MapleItem() {}

	unsigned int GetId() { return itemId; }
	string getName() { return itemName; }
	MapleItemClass GetClassification() { return itemClassification; }
	unsigned short GetQuantity() { return itemQuantity; }
	unsigned short MaxQuantity() { return maxQuantity; }

	void SetQuantity(unsigned short quantity) { itemQuantity = quantity; }

protected:
	unsigned int itemId;
	string itemName;
	MapleImage icon;
	MapleImage rawIcon;
	MapleItemClass itemClassification;
	unsigned short itemQuantity;
	unsigned short maxQuantity;
	bool isCashItem;
	bool isOFK;

private:
	bool initialized;
};
