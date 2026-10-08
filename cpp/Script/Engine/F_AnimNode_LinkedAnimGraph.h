// /Script/Engine.AnimNode_LinkedAnimGraph
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimGraph.h

USTRUCT()
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{
    UPROPERTY() TArray<FPoseLink> InputPoses;  // 0x0058, size 0x10
    UPROPERTY() TArray<FName> InputPoseNames;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimInstance> InstanceClass;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) FName Tag;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere) uint8 bReceiveNotifiesFromLinkedInstances : 1;  // 0x009C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bPropagateNotifiesToLinkedInstances : 1;  // 0x009C, mask 0x02

    // Not reflected:
    FAnimNode_Base * LinkedRoot;  // 0x0088
    int32 NodeIndex;  // 0x0090
    int32 CachedLinkedNodeIndex;  // 0x0094
    float PendingBlendDuration;  // 0x0098
};
