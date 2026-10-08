// /Script/Icarus.ItemDLCData
// size 0x30, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideFunctionLibrary.h

USTRUCT()
struct FItemDLCData
{
    UPROPERTY() FItemsStaticRowHandle RowHandle;  // 0x0000, size 0x18
    UPROPERTY() FDLCPackageDataRowHandle DLC;  // 0x0018, size 0x18
};
