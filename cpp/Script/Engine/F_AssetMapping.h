// /Script/Engine.AssetMapping
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/AssetMappingTable.h

USTRUCT()
struct FAssetMapping
{
public:
    UPROPERTY(EditAnywhere) UAnimationAsset* SourceAsset;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) UAnimationAsset* TargetAsset;  // 0x0008, size 0x8
};
