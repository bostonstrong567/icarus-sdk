// /Script/Engine.AnimBlueprintFunction
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimClassInterface.h

USTRUCT()
struct FAnimBlueprintFunction
{
public:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() FName Group;  // 0x0008, size 0x8
    UPROPERTY() int32 OutputPoseNodeIndex;  // 0x0010, size 0x4
    UPROPERTY() TArray<FName> InputPoseNames;  // 0x0018, size 0x10
    UPROPERTY() TArray<int32> InputPoseNodeIndices;  // 0x0028, size 0x10
    FStructProperty * OutputPoseNodeProperty;  // 0x0038, not reflected
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > InputPoseNodeProperties;  // 0x0040, not reflected
    TArray<FProperty *,TSizedDefaultAllocator<32> > InputProperties;  // 0x0050, not reflected
    UPROPERTY(Transient) bool bImplemented;  // 0x0060, size 0x1
};
