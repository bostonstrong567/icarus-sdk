// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Fishing_Rod.BP_ActionableBehaviour_Fishing_Rod_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x46E, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Fishing_Rod_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ButtonPressed;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TimerStarted;  // 0x0319, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaterEventFired;  // 0x031A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LureInWater;  // 0x031B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompletedMinigame;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInspectingFish;  // 0x031D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFiring;  // 0x031E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinigameReactionTimer;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThrowOffset;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DrawPower;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFishingTimer;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFishingTimer;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WaterRaytraceTimer;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundRaytraceDistance;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFireDrawPower;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRangedWeaponData RangedWeaponData;  // 0x0340, size 0xD0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MinigameTimer;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SkeletalItem_Fishing_Rod_C* Rod;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FInspectionStateChanged InspectionStateChanged;  // 0x0430, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDistance;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceIncrement;  // 0x0444, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSetDefault;  // 0x0448, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSetupIncrement;  // 0x0449, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLureLocation;  // 0x044C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFishAdded FishAdded;  // 0x0458, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LureMovementDetectRadius;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsFishInGoldenZone;  // 0x046C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanCancelInspect;  // 0x046D, size 0x1

    UFUNCTION(BlueprintCallable) void CheckForWater();
    UFUNCTION(BlueprintCallable) void CheckMovementValidity(bool& IsValid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Completed_Reaction();  // named "Completed Reaction"
    UFUNCTION(BlueprintCallable) void DoThrow(float Power);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void EndInspectingMontage();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Rod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishAdded__DelegateSignature();
    UFUNCTION(BlueprintCallable) void FishMovement();
    UFUNCTION(BlueprintCallable) void FishToInventory();
    UFUNCTION(BlueprintCallable) void FishingMinigameLogic();
    UFUNCTION(BlueprintCallable) void FishingTimerEnd();
    UFUNCTION(BlueprintCallable) void FishingTimerStart();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentDrawPercentage(float& Percentage);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFishingRod(ABP_SkeletalItem_Fishing_Rod_C*& BP_Skeletal_Item_Fishing_Rod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetStatAdjustedDurability(int32 DurabilityLoss, int32& RodDurabilityLoss, int32& LureDurabilityLoss);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Grant_Experience(FItemData Fish);  // parameters 0x1F0, named "Grant Experience"
    UFUNCTION(BlueprintCallable) void InspectionStateChanged__DelegateSignature(bool IsInspecting);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFullyCasted(bool& FullyCasted);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsLureInWater(bool& InWater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Multicast_FinishInspect();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_InspectFish();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PostThrow();
    UFUNCTION(BlueprintImplementableEvent) void OnActionAborted(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFishCaught();
    UFUNCTION(BlueprintCallable) void OnFishLost();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Reel(bool Reel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReelLogic();
    UFUNCTION(BlueprintCallable) void Reset_Timer();  // named "Reset Timer"
    UFUNCTION(BlueprintCallable) void ResetIfLureIsTooClose();
    UFUNCTION(BlueprintCallable) void ResetIfLureIsTooFar();
    UFUNCTION(BlueprintCallable) void ResetIfLureOnRod(bool& IsLureOffRod);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Client, Reliable) void ResetMinigame();
    UFUNCTION(BlueprintCallable) void ResetOnLureDistance();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_DeliverFish();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_GrantFish(AIcarusPlayerCharacterSurvival* Fisher);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_QuickReel();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_Reel(bool Reel);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestThrow(float Power);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ResetTargetLocation();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetLureProgress(float CurrentProgress, bool IsInGoldenZone);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetUpdateProgress();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupFishMovement();
    UFUNCTION(BlueprintCallable) void SetupIncrementDistance(float Current_Progress);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldPlayReelingAnimation(bool& ShouldPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleCatchFishUI();
};
