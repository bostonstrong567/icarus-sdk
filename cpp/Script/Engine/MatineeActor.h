// /Script/Engine.MatineeActor
// Derives from: AActor > UObject
// size 0x2C8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/MatineeActor.h

UCLASS(Config=Engine)
class AMatineeActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UInterpData* MatineeData;  // 0x0220, size 0x8
    UPROPERTY() FName MatineeControllerName;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float PlayRate;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPlayOnLevelLoad : 1;  // 0x0234, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceStartPos : 1;  // 0x0234, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ForceStartPosition;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) uint8 bLooping : 1;  // 0x023C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRewindOnPlay : 1;  // 0x023C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNoResetOnRewind : 1;  // 0x023C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRewindIfAlreadyPlaying : 1;  // 0x023C, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableRadioFilter : 1;  // 0x023C, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bClientSideOnly : 1;  // 0x023C, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSkipUpdateIfNotVisible : 1;  // 0x023C, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsSkippable : 1;  // 0x023C, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreferredSplitScreenNum;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableMovementInput : 1;  // 0x0244, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableLookAtInput : 1;  // 0x0244, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bHidePlayer : 1;  // 0x0244, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bHideHud : 1;  // 0x0244, mask 0x08
    UPROPERTY(Replicated) TArray<FInterpGroupActorInfo> GroupActorInfos;  // 0x0248, size 0x10
    UPROPERTY(Transient) uint8 bShouldShowGore : 1;  // 0x0258, mask 0x01
    UPROPERTY(Transient) TArray<UInterpGroupInst*> GroupInst;  // 0x0260, size 0x10
    UPROPERTY(Transient) TArray<FCameraCutInfo> CameraCuts;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, Replicated, Transient, BlueprintReadOnly) uint8 bIsPlaying : 1;  // 0x0280, mask 0x01
    UPROPERTY(Replicated) uint8 bReversePlayback : 1;  // 0x0280, mask 0x02
    UPROPERTY(Replicated, Transient) uint8 bPaused : 1;  // 0x0280, mask 0x04
    UPROPERTY(Replicated, Transient) uint8 bPendingStop : 1;  // 0x0280, mask 0x08
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float InterpPosition;  // 0x0284, size 0x4
    UPROPERTY(Replicated) uint8 ReplicationForceIsPlaying;  // 0x028C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMatineeEvent OnPlay;  // 0x0290, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMatineeEvent OnStop;  // 0x02A0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMatineeEvent OnPause;  // 0x02B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float ClientSidePositionErrorTolerance;  // 0x0288
    FTimerHandle TimerHandle_CheckPriorityRefresh;  // 0x02C0, protected

    UFUNCTION(BlueprintCallable) void ChangePlaybackDirection();
    UFUNCTION(BlueprintCallable) void EnableGroupByName(FString GroupName, bool bEnable);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Pause();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void Reverse();
    UFUNCTION(BlueprintCallable) void SetLoopingState(bool bNewLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPosition(float NewPosition, bool bJump);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void Stop();

    // Virtual functions that start here:
    //   ChangePlaybackDirection, CheckPriorityRefresh, NotifyEventTriggered, Pause, Play, Reverse
    //   SetLoopingState, Stop, UpdateReplicatedData
};
