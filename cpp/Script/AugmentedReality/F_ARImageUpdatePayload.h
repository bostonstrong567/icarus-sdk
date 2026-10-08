// /Script/AugmentedReality.ARImageUpdatePayload
// size 0x60, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARImageUpdatePayload
{
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadOnly) FTransform WorldTransform;  // 0x0020, size 0x30
    UPROPERTY(BlueprintReadOnly) UARCandidateImage* DetectedImage;  // 0x0050, size 0x8
    UPROPERTY(BlueprintReadOnly) FVector2D EstimatedSize;  // 0x0058, size 0x8
};
