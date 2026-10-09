// /Script/AnimGraphRuntime.AnimNode_Slot
// size 0x48, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h

USTRUCT()
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Source;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SlotName;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlwaysUpdateSourcePose;  // 0x0028, size 0x1
protected:
    FSlotNodeWeightInfo WeightData;  // 0x002C, not reflected
    FGraphTraversalCounter SlotNodeInitializationCounter;  // 0x0038, not reflected
};
