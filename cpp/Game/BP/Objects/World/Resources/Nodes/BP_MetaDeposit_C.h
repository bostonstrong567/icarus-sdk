// /Game/BP/Objects/World/Resources/Nodes/BP_MetaDeposit.BP_MetaDeposit_C
// Derives from: ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x36D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MetaDeposit_C : public ABP_OreDeposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* MusicCueTrigger;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsEmptied;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MusicCueCheckTimer;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MusicCueCheckTimerFrequency;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MusicCueCheckPlayerIsLookingThreshold;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MusicCueHasPlayed;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ResourceRemainingTimer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MeteorDirection;  // 0x0360, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseCustomHighlightable;  // 0x036C, size 0x1

    UFUNCTION() void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__MusicCueTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckInPlayerView(bool& InPlayerView);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckResourceRemaining();
    UFUNCTION(BlueprintCallable) void DebugDeplete();
    UFUNCTION(BlueprintCallable) void DisableMusicCueChecks();
    UFUNCTION() void ExecuteUbergraph_BP_MetaDeposit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void IsDepleted(bool& Depleted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MusicCueCheck();
    UFUNCTION(BlueprintCallable) void OnRep_IsEmptied();
    UFUNCTION(BlueprintCallable) void PlayMusicCue();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ResourceEmptied();
    UFUNCTION(BlueprintCallable) void StartMusicCueChecks();
    UFUNCTION(BlueprintCallable) void StopMusicCueChecks();
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
