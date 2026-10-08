// /Script/LiveLinkInterface.LiveLinkTransformStaticData
// size 0x18, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkTransformTypes.h

USTRUCT()
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsLocationSupported;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRotationSupported;  // 0x0011, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsScaleSupported;  // 0x0012, size 0x1
};
