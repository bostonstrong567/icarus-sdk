// /Script/Engine.BranchingPointNotifyPayload
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h

USTRUCT()
struct FBranchingPointNotifyPayload
{

    // Not reflected:
    USkeletalMeshComponent * SkelMeshComponent;  // 0x0000
    UAnimSequenceBase * SequenceAsset;  // 0x0008
    FAnimNotifyEvent * NotifyEvent;  // 0x0010
    int32 MontageInstanceID;  // 0x0018
};
