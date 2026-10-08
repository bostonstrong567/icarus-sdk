// /Game/BP/AI/GOAP/AI/BP_NPC_Irradiated_Prospector_Character.BP_NPC_Irradiated_Prospector_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD04, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Irradiated_Prospector_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Lo1;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi4;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi3;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi2;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi1;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CF8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 NPCVariation;  // 0x0CFC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool ShouldSprint;  // 0x0D00, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool ShouldCrawl;  // 0x0D01, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsStatsUpdate;  // 0x0D02, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEmerging;  // 0x0D03, size 0x1

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Irradiated_Prospector_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetLocomotionBS(UBlendSpace1D*& Blendspace) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBlendOut_3E92E10B4918A15B8832D39F7076B5C3(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnCharacterDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnCompleted_3E92E10B4918A15B8832D39F7076B5C3(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_3E92E10B4918A15B8832D39F7076B5C3(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_3E92E10B4918A15B8832D39F7076B5C3(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_3E92E10B4918A15B8832D39F7076B5C3(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_NPCVariation();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateAnchor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
    UFUNCTION(BlueprintCallable) void UpdateNPCStats();
    UFUNCTION(BlueprintCallable) void UpdateNPCVariation();
};
