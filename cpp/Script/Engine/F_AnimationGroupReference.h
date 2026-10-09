// /Script/Engine.AnimationGroupReference
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FAnimationGroupReference
{
public:
    UPROPERTY(EditAnywhere) FName GroupName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EAnimGroupRole> GroupRole;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) EAnimSyncGroupScope GroupScope;  // 0x0009, size 0x1
};
