// /Script/LiveLinkInterface.LiveLinkCameraStaticData
// size 0x28, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkCameraTypes.h

USTRUCT()
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsFieldOfViewSupported;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAspectRatioSupported;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsFocalLengthSupported;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsProjectionModeSupported;  // 0x001B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilmBackWidth;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilmBackHeight;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsApertureSupported;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsFocusDistanceSupported;  // 0x0025, size 0x1
};
