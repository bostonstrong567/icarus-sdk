// /Script/Engine.AnimMontageInstance
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h

USTRUCT()
struct FAnimMontageInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UAnimMontage* Montage;  // 0x0000, size 0x8
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> OnMontageEnded;  // 0x0008, not reflected
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> OnMontageBlendingOutStarted;  // 0x0018, not reflected
    UPROPERTY() bool bPlaying;  // 0x0028, size 0x1
    UPROPERTY(Transient) float DefaultBlendTimeMultiplier;  // 0x002C, size 0x4
    FMarkerTickRecord MarkerTickRecord;  // 0x0030, not reflected
    TArray<FPassedMarker,TSizedDefaultAllocator<32> > MarkersPassedThisTick;  // 0x0040, not reflected
    bool bDidUseMarkerSyncThisTick;  // 0x0050, not reflected
    bool bEnableAutoBlendOut;  // 0x0051, not reflected
private:
    FMontageSubStepper MontageSubStepper;  // 0x0058, not reflected
    UPROPERTY() TArray<int32> NextSections;  // 0x00E8, size 0x10
    UPROPERTY() TArray<int32> PrevSections;  // 0x00F8, size 0x10
    TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> AnimInstance;  // 0x0108, not reflected
    int32 InstanceID;  // 0x0110, not reflected
    UPROPERTY(Transient) TArray<FAnimNotifyEvent> ActiveStateBranchingPoints;  // 0x0118, size 0x10
    UPROPERTY() float Position;  // 0x0128, size 0x4
    UPROPERTY() float PlayRate;  // 0x012C, size 0x4
    UPROPERTY(Transient) FAlphaBlend Blend;  // 0x0130, size 0x30
    bool bInterrupted;  // 0x0160, not reflected
    float PreviousWeight;  // 0x0164, not reflected
    float NotifyWeight;  // 0x0168, not reflected
    float DeltaMoved;  // 0x016C, not reflected
    float PreviousPosition;  // 0x0170, not reflected
    FName SyncGroupName;  // 0x0174, not reflected
    TOptional<float> ForcedNextFromPosition;  // 0x017C, not reflected
    TOptional<float> ForcedNextToPosition;  // 0x0184, not reflected
    UPROPERTY(Transient) int32 DisableRootMotionCount;  // 0x018C, size 0x4
    TArray<FAnimMontageInstance *,TSizedDefaultAllocator<32> > MontageSyncFollowers;  // 0x0190, not reflected
    FAnimMontageInstance * MontageSyncLeader;  // 0x01A0, not reflected
    uint32 MontageSyncUpdateFrameCounter;  // 0x01A8, not reflected
};
