// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C
// Derives from: UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Base_C : public UActionableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DEBUG_ShowGetAnimationErrorMessages;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* BehaviorOwner;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* BehaviorOwnerPlayer;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowNoDurabilityError;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NoDurabilityErrorTimerHandle;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool UseInsufficientStaminaSound;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool UseInsufficientDurabilitySound;  // 0x0309, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TemporaryStatUID;  // 0x030C, size 0x4

    UFUNCTION(BlueprintCallable) void AddTemporaryActionableStats(const TMap<FStatsEnum, int32>& InStats, int32& StatsUID);  // parameters 0x54
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool HasLivingItemUpgrade(FLivingItemUpgradesRowHandle Upgrade) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable) void InitActionable();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsLocallyOwned(bool& LocallyOwned) const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientDurability(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientStamina(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnErrorMessageCooldownComplete();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void PerformActionFromMenu(AActor* InvokingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayActionInsufficientStaminaSound();
    UFUNCTION(BlueprintCallable) void PlayActionItemBrokenSound();
    UFUNCTION(BlueprintCallable) void PlayActionMontage(AIcarusPlayerCharacter* AnimTarget, bool PlayRandom, float SpeedModifier, TArray<FName>& TPAnimSections, TArray<FName>& FPAnimSections);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ProcessDurabilityLoss(int32 Durability);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveTemporaryActionableStats(int32 OptionalUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Select_Random_Weighted_Montage(UAnimMontage* AnimMontage, TArray<FName>& SectionNames, FName& ChosenSection);  // parameters 0x20, named "Select Random Weighted Montage"
    UFUNCTION(BlueprintCallable) void ShowErrorMessage(FText Message, FTimerHandle Timer, float ErrorCooldown, FTimerHandle& OutTimerHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void StopActionMontage(AIcarusPlayerCharacter* AnimTarget, float BlendOutTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TryGetFailAnimations(TArray<FName>& TP_AnimNames, TArray<FName>& FP_AnimNames);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TryGetMissAnimations(TArray<FName>& TP_AnimNames, TArray<FName>& FP_AnimNames);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TryGetSuccessAnimations(FValidHitTypesRowHandle ValidHitType, TArray<FName>& TP_AnimNames, TArray<FName>& FP_AnimNames);  // parameters 0x38
};
