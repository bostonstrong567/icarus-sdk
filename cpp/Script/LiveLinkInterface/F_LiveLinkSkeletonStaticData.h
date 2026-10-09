// /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
// size 0x30, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h

USTRUCT()
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> BoneNames;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> BoneParents;  // 0x0020, size 0x10
};
