// /Script/Engine.BranchFilter
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h

USTRUCT()
struct FBranchFilter
{
public:
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 BlendDepth;  // 0x0008, size 0x4
};
