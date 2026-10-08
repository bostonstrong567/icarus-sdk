// /Script/Engine.AssetMappingTable
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AssetMappingTable.h

UCLASS(MinimalAPI)
class UAssetMappingTable : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FAssetMapping> MappedAssets;  // 0x0028, size 0x10
};
