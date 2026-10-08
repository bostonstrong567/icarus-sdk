// /Script/LiveLinkInterface.LiveLinkAnimationFrameData
// size 0xB0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h

USTRUCT()
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> Transforms;  // 0x00A0, size 0x10
};
