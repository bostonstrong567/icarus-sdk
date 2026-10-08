// /Script/Engine.AnimBlueprintGeneratedClass
// Derives from: UBlueprintGeneratedClass > UClass > UStruct > UField > UObject
// size 0x5B0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h

UCLASS()
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass, public IAnimClassInterface
{
public:
    UPROPERTY() TArray<FBakedAnimationStateMachine> BakedStateMachines;  // 0x0330, size 0x10
    UPROPERTY() USkeleton* TargetSkeleton;  // 0x0340, size 0x8
    UPROPERTY() TArray<FAnimNotifyEvent> AnimNotifies;  // 0x0348, size 0x10
    UPROPERTY() TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;  // 0x0358, size 0x50
    UPROPERTY() TArray<FName> SyncGroupNames;  // 0x0428, size 0x10
    UPROPERTY() TArray<FExposedValueHandler> EvaluateGraphExposedInputs;  // 0x0438, size 0x10
    UPROPERTY() TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation;  // 0x0448, size 0x50
    UPROPERTY() TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;  // 0x0498, size 0x50
    UPROPERTY() FPropertyAccessLibrary PropertyAccessLibrary;  // 0x04E8, size 0xC8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FAnimBlueprintFunction,TSizedDefaultAllocator<32> > AnimBlueprintFunctions;  // 0x03A8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > AnimNodeProperties;  // 0x03B8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > LinkedAnimGraphNodeProperties;  // 0x03C8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > LinkedAnimLayerNodeProperties;  // 0x03D8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > PreUpdateNodeProperties;  // 0x03E8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > DynamicResetNodeProperties;  // 0x03F8
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > StateMachineNodeProperties;  // 0x0408
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > InitializationNodeProperties;  // 0x0418
};
