// /Script/Engine.AnimClassData
// Derives from: UObject
// size 0x330, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimClassData.h

UCLASS()
class UAnimClassData : public UObject, public IAnimClassInterface
{
public:
    UPROPERTY() TArray<FBakedAnimationStateMachine> BakedStateMachines;  // 0x0030, size 0x10
    UPROPERTY() USkeleton* TargetSkeleton;  // 0x0040, size 0x8
    UPROPERTY() TArray<FAnimNotifyEvent> AnimNotifies;  // 0x0048, size 0x10
    UPROPERTY() TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;  // 0x0058, size 0x50
    UPROPERTY() TArray<FAnimBlueprintFunction> AnimBlueprintFunctions;  // 0x00A8, size 0x10
    UPROPERTY() TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData;  // 0x00B8, size 0x10
    UPROPERTY() TArray<FFieldPath> AnimNodeProperties;  // 0x00C8, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedAnimNodeProperties;  // 0x00D8, not reflected
    UPROPERTY() TArray<FFieldPath> LinkedAnimGraphNodeProperties;  // 0x00E8, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedLinkedAnimGraphNodeProperties;  // 0x00F8, not reflected
    UPROPERTY() TArray<FFieldPath> LinkedAnimLayerNodeProperties;  // 0x0108, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedLinkedAnimLayerNodeProperties;  // 0x0118, not reflected
    UPROPERTY() TArray<FFieldPath> PreUpdateNodeProperties;  // 0x0128, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedPreUpdateNodeProperties;  // 0x0138, not reflected
    UPROPERTY() TArray<FFieldPath> DynamicResetNodeProperties;  // 0x0148, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedDynamicResetNodeProperties;  // 0x0158, not reflected
    UPROPERTY() TArray<FFieldPath> StateMachineNodeProperties;  // 0x0168, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedStateMachineNodeProperties;  // 0x0178, not reflected
    UPROPERTY() TArray<FFieldPath> InitializationNodeProperties;  // 0x0188, size 0x10
    TArray<FStructProperty *,TSizedDefaultAllocator<32> > ResolvedInitializationNodeProperties;  // 0x0198, not reflected
    UPROPERTY() TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers;  // 0x01A8, size 0x50
    UPROPERTY() TArray<FName> SyncGroupNames;  // 0x01F8, size 0x10
    UPROPERTY() TArray<FExposedValueHandler> EvaluateGraphExposedInputs;  // 0x0208, size 0x10
    UPROPERTY() TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;  // 0x0218, size 0x50
    UPROPERTY() FPropertyAccessLibrary PropertyAccessLibrary;  // 0x0268, size 0xC8
};
