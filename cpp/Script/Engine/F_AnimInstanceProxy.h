// /Script/Engine.AnimInstanceProxy
// size 0x770, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimInstanceProxy.h

USTRUCT()
struct FAnimInstanceProxy
{
protected:
    FGraphTraversalCounter InitializationCounter;  // 0x0480, not reflected
    FGraphTraversalCounter CachedBonesCounter;  // 0x0490, not reflected
    FGraphTraversalCounter UpdateCounter;  // 0x04A0, not reflected
    FGraphTraversalCounter EvaluationCounter;  // 0x04B0, not reflected
    FGraphTraversalCounter SlotNodeInitializationCounter;  // 0x04C0, not reflected
    uint64 FrameCounterForUpdate;  // 0x04D0, not reflected
    uint64 FrameCounterForNodeUpdate;  // 0x04D8, not reflected
    uint8 : 1 bBoneCachesInvalidated;  // 0x0769, not reflected
private:
    FTransform ComponentTransform;  // 0x0010, not reflected
    FTransform ComponentRelativeTransform;  // 0x0040, not reflected
    FTransform ActorTransform;  // 0x0070, not reflected
    UObject * AnimInstanceObject;  // 0x00A0, not reflected
    IAnimClassInterface * AnimClassInterface;  // 0x00A8, not reflected
    USkeleton * Skeleton;  // 0x00B0, not reflected
    USkeletalMeshComponent * SkeletalMeshComponent;  // 0x00B8, not reflected
    FAnimInstanceProxy * MainInstanceProxy;  // 0x00C0, not reflected
    float CurrentDeltaSeconds;  // 0x00C8, not reflected
    float CurrentTimeDilation;  // 0x00CC, not reflected
    FString AnimInstanceName;  // 0x00D0, not reflected
    FAnimNode_Base * RootNode;  // 0x00E0, not reflected
    FAnimNode_LinkedInputPose * DefaultLinkedInstanceInputNode;  // 0x00E8, not reflected
    TMap<FName,TArray<FAnimNode_SaveCachedPose *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose *,TSizedDefaultAllocator<32> >,0> > SavedPoseQueueMap;  // 0x00F0, not reflected
    TArray<FAnimTickRecord,TSizedDefaultAllocator<32> >[2] UngroupedActivePlayerArrays;  // 0x0140, not reflected
    TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0> >[2] SyncGroupMaps;  // 0x0160, not reflected
    TArray<float,TSizedDefaultAllocator<32> >[2] MachineWeightArrays;  // 0x0200, not reflected
    TArray<float,TSizedDefaultAllocator<32> >[2] StateWeightArrays;  // 0x0220, not reflected
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > StateMachineClassIndexToWeightOffset;  // 0x0240, not reflected
    int32 SyncGroupWriteIndex;  // 0x0290, not reflected
    FAnimNotifyQueue NotifyQueue;  // 0x0298, not reflected
    ERootMotionMode::Type RootMotionMode;  // 0x0308, not reflected
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0> > SlotNameToTrackerIndex;  // 0x0310, not reflected
    TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32> >[2] SlotWeightTracker;  // 0x0360, not reflected
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> >[3] AnimationCurves;  // 0x0380, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > MaterialParametersToClear;  // 0x0470, not reflected
    FRootMotionMovementParams ExtractedRootMotion;  // 0x04E0, not reflected
    FBoneContainer RequiredBones;  // 0x0520, not reflected
    int32 LODLevel;  // 0x0670, not reflected
    int32 CacheBonesRecursionCounter;  // 0x0674, not reflected
    FTransform SkelMeshCompLocalToWorld;  // 0x0680, not reflected
    FTransform SkelMeshCompOwnerTransform;  // 0x06B0, not reflected
    int16 NumUroSkippedFrames_Update;  // 0x06E0, not reflected
    int16 NumUroSkippedFrames_Eval;  // 0x06E2, not reflected
    TArray<FMontageEvaluationState,TSizedDefaultAllocator<32> > MontageEvaluationData;  // 0x06E8, not reflected
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > GameThreadPreUpdateNodes;  // 0x06F8, not reflected
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > LODDisabledGameThreadPreUpdateNodes;  // 0x0708, not reflected
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > DynamicResetNodes;  // 0x0718, not reflected
    TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32> > NativeTransitionBindings;  // 0x0728, not reflected
    TArray<FNativeStateBinding,TSizedDefaultAllocator<32> > NativeStateEntryBindings;  // 0x0738, not reflected
    TArray<FNativeStateBinding,TSizedDefaultAllocator<32> > NativeStateExitBindings;  // 0x0748, not reflected
    TArray<FPoseSnapshot,TSizedDefaultAllocator<32> > PoseSnapshots;  // 0x0758, not reflected
    bool bUpdatingRoot;  // 0x0768, not reflected
    uint8 : 1 bDeferRootNodeInitialization;  // 0x0769, not reflected
    uint8 : 1 bShouldExtractRootMotion;  // 0x0769, not reflected
};
