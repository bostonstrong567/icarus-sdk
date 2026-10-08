// /Game/BP/Player/Components/BP_CinematicChair.BP_CinematicChair_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CinematicChair_C : public ABP_SeatBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* PreviousPlayer;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* OwningController;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MarkForDestroy;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UW_SpectatorUI_C* SpectatorUI;  // 0x03B0, size 0x8

    UFUNCTION(BlueprintCallable) void ClearOwningController();
    UFUNCTION() void ExecuteUbergraph_BP_CinematicChair(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) APawn* GetPossesTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FRotator GetSeatedPlayerControlRotation() const;  // parameters 0xC
    UFUNCTION() void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDriverSeat() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool LeaveSeat(bool bChangeSeat, bool bForce);  // parameters 0x3
    UFUNCTION(BlueprintImplementableEvent) void OnAttachedPlayerDestroyed(AActor* DestroyedAttachedPlayer);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SettingsUpdated(FPostProcessSettings Settings);  // parameters 0x560
};
