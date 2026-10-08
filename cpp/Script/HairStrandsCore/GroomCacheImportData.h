// /Script/HairStrandsCore.GroomCacheImportData
// Derives from: UAssetImportData > UObject
// size 0x48, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCacheImportOptions.h

UCLASS(EditInlineNew)
class UGroomCacheImportData : public UAssetImportData
{
public:
    UPROPERTY() FGroomCacheImportSettings Settings;  // 0x0028, size 0x20
};
