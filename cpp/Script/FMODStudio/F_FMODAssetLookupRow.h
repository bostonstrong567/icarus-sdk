// /Script/FMODStudio.FMODAssetLookupRow
// size 0x28, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/FMODAssetLookup.h

USTRUCT()
struct FFMODAssetLookupRow : public FTableRowBase
{
public:
    UPROPERTY(EditAnywhere) FString PackageName;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FString AssetName;  // 0x0018, size 0x10
};
