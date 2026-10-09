// /Script/Engine.AnimParentNodeAssetOverride
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprint.h

USTRUCT()
struct FAnimParentNodeAssetOverride
{
public:
    UPROPERTY() UAnimationAsset* NewAsset;  // 0x0000, size 0x8
    UPROPERTY() FGuid ParentNodeGuid;  // 0x0008, size 0x10
};
