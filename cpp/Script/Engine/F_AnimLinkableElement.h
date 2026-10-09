// /Script/Engine.AnimLinkableElement
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimLinkableElement.h

USTRUCT()
struct FAnimLinkableElement
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UAnimMontage* LinkedMontage;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) int32 SlotIndex;  // 0x0010, size 0x4
    UPROPERTY() int32 SegmentIndex;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAnimLinkMethod> LinkMethod;  // 0x0018, size 0x1
    UPROPERTY() TEnumAsByte<EAnimLinkMethod> CachedLinkMethod;  // 0x0019, size 0x1
    UPROPERTY() float SegmentBeginTime;  // 0x001C, size 0x4
    UPROPERTY() float SegmentLength;  // 0x0020, size 0x4
    UPROPERTY() float LinkValue;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) UAnimSequenceBase* LinkedSequence;  // 0x0028, size 0x8
};
