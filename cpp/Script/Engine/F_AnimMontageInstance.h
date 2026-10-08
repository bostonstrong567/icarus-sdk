// /Script/Engine.AnimMontageInstance
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FAnimMontageInstance
{
    UPROPERTY() UAnimMontage* Montage;  // 0x0000, size 0x8
    UPROPERTY() bool bPlaying;  // 0x0028, size 0x1
    UPROPERTY(Transient) float DefaultBlendTimeMultiplier;  // 0x002C, size 0x4
    UPROPERTY() TArray<int32> NextSections;  // 0x00E8, size 0x10
    UPROPERTY() TArray<int32> PrevSections;  // 0x00F8, size 0x10
    UPROPERTY(Transient) TArray<FAnimNotifyEvent> ActiveStateBranchingPoints;  // 0x0118, size 0x10
    UPROPERTY() float Position;  // 0x0128, size 0x4
    UPROPERTY() float PlayRate;  // 0x012C, size 0x4
    UPROPERTY(Transient) FAlphaBlend Blend;  // 0x0130, size 0x30
    UPROPERTY(Transient) int32 DisableRootMotionCount;  // 0x018C, size 0x4

    // Not reflected:
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> OnMontageEnded;  // 0x0008
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> OnMontageBlendingOutStarted;  // 0x0018
    FMarkerTickRecord MarkerTickRecord;  // 0x0030
    TArray<FPassedMarker,TSizedDefaultAllocator<32> > MarkersPassedThisTick;  // 0x0040
    bool bDidUseMarkerSyncThisTick;  // 0x0050
    bool bEnableAutoBlendOut;  // 0x0051
    FMontageSubStepper MontageSubStepper;  // 0x0058
    TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> AnimInstance;  // 0x0108
    int32 InstanceID;  // 0x0110
    bool bInterrupted;  // 0x0160
    float PreviousWeight;  // 0x0164
    float NotifyWeight;  // 0x0168
    float DeltaMoved;  // 0x016C
    float PreviousPosition;  // 0x0170
    FName SyncGroupName;  // 0x0174
    TOptional<float> ForcedNextFromPosition;  // 0x017C
    TOptional<float> ForcedNextToPosition;  // 0x0184
    TArray<FAnimMontageInstance *,TSizedDefaultAllocator<32> > MontageSyncFollowers;  // 0x0190
    FAnimMontageInstance * MontageSyncLeader;  // 0x01A0
    uint32 MontageSyncUpdateFrameCounter;  // 0x01A8
};
