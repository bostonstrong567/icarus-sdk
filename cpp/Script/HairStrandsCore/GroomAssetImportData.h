// /Script/HairStrandsCore.GroomAssetImportData
// Derives from: UAssetImportData > UObject
// size 0x30, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetImportData.h

UCLASS(EditInlineNew)
class UGroomAssetImportData : public UAssetImportData
{
public:
    UPROPERTY() UGroomImportOptions* ImportOptions;  // 0x0028, size 0x8
};
