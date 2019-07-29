#pragma once
class oCObjectFactoryEx : public oCObjectFactory
{
	zCLASS_UNION_DECLARATION(oCObjectFactoryEx);
public:
	virtual oCNpc* CreateNpc(int index); // Nowa metoda tworzenia oCNpc
};

