// /Script/Engine.AnimBlueprintFunctionData
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimClassData.h

USTRUCT()
struct FAnimBlueprintFunctionData
{
    UPROPERTY() FFieldPath OutputPoseNodeProperty;  // 0x0000, size 0x20
    UPROPERTY() TArray<FFieldPath> InputPoseNodeProperties;  // 0x0020, size 0x10
    UPROPERTY() TArray<FFieldPath> InputProperties;  // 0x0030, size 0x10
};
