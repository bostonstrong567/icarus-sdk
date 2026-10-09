// /Script/AnimGraphRuntime.RotationLimit
// size 0x18, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_Trail.h

USTRUCT()
struct FRotationLimit
{
public:
    UPROPERTY(EditAnywhere) FVector LimitMin;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector LimitMax;  // 0x000C, size 0xC
};
