// /Script/Engine.AnimInstanceProxy
// size 0x770, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimInstanceProxy.h

USTRUCT()
struct FAnimInstanceProxy
{

    // Not reflected:
    FTransform ComponentTransform;  // 0x0010
    FTransform ComponentRelativeTransform;  // 0x0040
    FTransform ActorTransform;  // 0x0070
    UObject * AnimInstanceObject;  // 0x00A0
    IAnimClassInterface * AnimClassInterface;  // 0x00A8
    USkeleton * Skeleton;  // 0x00B0
    USkeletalMeshComponent * SkeletalMeshComponent;  // 0x00B8
    FAnimInstanceProxy * MainInstanceProxy;  // 0x00C0
    float CurrentDeltaSeconds;  // 0x00C8
    float CurrentTimeDilation;  // 0x00CC
    FString AnimInstanceName;  // 0x00D0
    FAnimNode_Base * RootNode;  // 0x00E0
    FAnimNode_LinkedInputPose * DefaultLinkedInstanceInputNode;  // 0x00E8
    TMap<FName,TArray<FAnimNode_SaveCachedPose *,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_SaveCachedPose *,TSizedDefaultAllocator<32> >,0> > SavedPoseQueueMap;  // 0x00F0
    TArray<FAnimTickRecord,TSizedDefaultAllocator<32> >[2] UngroupedActivePlayerArrays;  // 0x0140
    TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0> >[2] SyncGroupMaps;  // 0x0160
    TArray<float,TSizedDefaultAllocator<32> >[2] MachineWeightArrays;  // 0x0200
    TArray<float,TSizedDefaultAllocator<32> >[2] StateWeightArrays;  // 0x0220
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > StateMachineClassIndexToWeightOffset;  // 0x0240
    int32 SyncGroupWriteIndex;  // 0x0290
    FAnimNotifyQueue NotifyQueue;  // 0x0298
    ERootMotionMode::Type RootMotionMode;  // 0x0308
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0> > SlotNameToTrackerIndex;  // 0x0310
    TArray<FMontageActiveSlotTracker,TSizedDefaultAllocator<32> >[2] SlotWeightTracker;  // 0x0360
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> >[3] AnimationCurves;  // 0x0380
    TArray<FName,TSizedDefaultAllocator<32> > MaterialParametersToClear;  // 0x0470
    FGraphTraversalCounter InitializationCounter;  // 0x0480
    FGraphTraversalCounter CachedBonesCounter;  // 0x0490
    FGraphTraversalCounter UpdateCounter;  // 0x04A0
    FGraphTraversalCounter EvaluationCounter;  // 0x04B0
    FGraphTraversalCounter SlotNodeInitializationCounter;  // 0x04C0
    uint64 FrameCounterForUpdate;  // 0x04D0
    uint64 FrameCounterForNodeUpdate;  // 0x04D8
    FRootMotionMovementParams ExtractedRootMotion;  // 0x04E0
    FBoneContainer RequiredBones;  // 0x0520
    int32 LODLevel;  // 0x0670
    int32 CacheBonesRecursionCounter;  // 0x0674
    FTransform SkelMeshCompLocalToWorld;  // 0x0680
    FTransform SkelMeshCompOwnerTransform;  // 0x06B0
    int16 NumUroSkippedFrames_Update;  // 0x06E0
    int16 NumUroSkippedFrames_Eval;  // 0x06E2
    TArray<FMontageEvaluationState,TSizedDefaultAllocator<32> > MontageEvaluationData;  // 0x06E8
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > GameThreadPreUpdateNodes;  // 0x06F8
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > LODDisabledGameThreadPreUpdateNodes;  // 0x0708
    TArray<FAnimNode_Base *,TSizedDefaultAllocator<32> > DynamicResetNodes;  // 0x0718
    TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32> > NativeTransitionBindings;  // 0x0728
    TArray<FNativeStateBinding,TSizedDefaultAllocator<32> > NativeStateEntryBindings;  // 0x0738
    TArray<FNativeStateBinding,TSizedDefaultAllocator<32> > NativeStateExitBindings;  // 0x0748
    TArray<FPoseSnapshot,TSizedDefaultAllocator<32> > PoseSnapshots;  // 0x0758
    bool bUpdatingRoot;  // 0x0768
    uint8 : 1 bBoneCachesInvalidated;  // 0x0769
    uint8 : 1 bShouldExtractRootMotion;  // 0x0769
    uint8 : 1 bDeferRootNodeInitialization;  // 0x0769
};
