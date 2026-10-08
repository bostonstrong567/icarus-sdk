// /Script/AugmentedReality.ARCameraIntrinsics
// size 0x18, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

USTRUCT()
struct FARCameraIntrinsics
{
    UPROPERTY(BlueprintReadOnly) FIntPoint ImageResolution;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) FVector2D FocalLength;  // 0x0008, size 0x8
    UPROPERTY(BlueprintReadOnly) FVector2D PrincipalPoint;  // 0x0010, size 0x8
};
