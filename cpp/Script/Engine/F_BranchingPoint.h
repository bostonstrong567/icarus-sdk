// /Script/Engine.BranchingPoint
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FBranchingPoint : public FAnimLinkableElement
{
public:
    UPROPERTY(EditAnywhere) FName EventName;  // 0x0030, size 0x8
    UPROPERTY(Deprecated) float DisplayTime;  // 0x0038, size 0x4
    UPROPERTY() float TriggerTimeOffset;  // 0x003C, size 0x4
};
