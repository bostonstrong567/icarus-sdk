// /Script/Engine.SlotAnimationTrack
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FSlotAnimationTrack
{
public:
    UPROPERTY(EditAnywhere) FName SlotName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FAnimTrack AnimTrack;  // 0x0008, size 0x10
};
