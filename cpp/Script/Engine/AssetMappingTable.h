// /Script/Engine.AssetMappingTable
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AssetMappingTable.h

UCLASS(MinimalAPI)
class UAssetMappingTable : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FAssetMapping> MappedAssets;  // 0x0028, size 0x10
};
