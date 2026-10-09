// /Script/AugmentedReality.ARFaceUpdatePayload
// size 0x40, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARFaceUpdatePayload
{
public:
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) FVector LeftEyePosition;  // 0x0018, size 0xC
    UPROPERTY(BlueprintReadWrite) FVector RightEyePosition;  // 0x0024, size 0xC
    UPROPERTY(BlueprintReadWrite) FVector LookAtTarget;  // 0x0030, size 0xC
};
