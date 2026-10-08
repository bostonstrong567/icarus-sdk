// /Script/AugmentedReality.ARMeshUpdatePayload
// size 0x60, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARMeshUpdatePayload
{
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) FTransform WorldTransform;  // 0x0020, size 0x30
    UPROPERTY(BlueprintReadOnly) EARObjectClassification ObjectClassification;  // 0x0050, size 0x1
};
