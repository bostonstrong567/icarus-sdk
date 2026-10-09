// /Script/IcarusUtilities.IcarusDataTable
// Derives from: UDataTable > UObject
// size 0xB8, declared in Icarus/Source/IcarusUtilities/Public/IcarusDataTable.h

UCLASS()
class UIcarusDataTable : public UDataTable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UIcarusMetaTable* MetaTable;  // 0x00B0, size 0x8

    // Virtual functions that start here:
    //   GetDefaultStructData, IndexToName, Initialize, NameToIndex, RefreshConstants, VerifyRowCount
};
