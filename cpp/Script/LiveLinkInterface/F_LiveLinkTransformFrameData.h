// /Script/LiveLinkInterface.LiveLinkTransformFrameData
// size 0xD0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkTransformTypes.h

USTRUCT()
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FTransform Transform;  // 0x00A0, size 0x30
};
