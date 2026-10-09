// /Script/LiveLink.AnimNode_LiveLinkPose
// size 0x50, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/AnimNode_LiveLinkPose.h

USTRUCT()
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink InputPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLiveLinkSubjectName LiveLinkSubjectName;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset;  // 0x0028, size 0x8
    UPROPERTY(Transient) ULiveLinkRetargetAsset* CurrentRetargetAsset;  // 0x0030, size 0x8
private:
    FLiveLinkClientReference LiveLinkClient_GameThread;  // 0x0038, not reflected
    ILiveLinkClient * LiveLinkClient_AnyThread;  // 0x0040, not reflected
    float CachedDeltaTime;  // 0x0048, not reflected
};
