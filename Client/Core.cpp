#include "Global.h"
#include "Items\MapleEquip.h"

int main(int argc, char *argv[])
{
	MapleEquip* equip = reinterpret_cast<MapleEquip*>(new MapleItem(1, "SomeItem", MapleItemClass::EQUIPMENT));
	getchar();
	return 1;
}