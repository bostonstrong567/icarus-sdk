// /Script/Engine.BranchingPointNotifyPayload
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h

USTRUCT()
struct FBranchingPointNotifyPayload
{
public:
    USkeletalMeshComponent * SkelMeshComponent;  // 0x0000, not reflected
    UAnimSequenceBase * SequenceAsset;  // 0x0008, not reflected
    FAnimNotifyEvent * NotifyEvent;  // 0x0010, not reflected
    int32 MontageInstanceID;  // 0x0018, not reflected
};
