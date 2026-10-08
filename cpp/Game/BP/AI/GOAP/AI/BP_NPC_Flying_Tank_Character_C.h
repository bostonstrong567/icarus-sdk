// /Game/BP/AI/GOAP/AI/BP_NPC_Flying_Tank_Character.BP_NPC_Flying_Tank_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD40, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Flying_Tank_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FlyingTank_DustUp;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* TankFlying;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Plate4;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Plate3;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Plate2;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Plate1;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_UnderWing;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Underside;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0D08, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsFlying;  // 0x0D10, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsFlyingKey;  // 0x0D14, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UObject>> GroundedMontages;  // 0x0D20, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPActionsRowHandle> GroundedActions;  // 0x0D30, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Flying_Tank_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayGOAPActionMontage(FGOAPActionsRowHandle Action, FName Section, bool ClientsOnly);  // parameters 0x21
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayMontage(TSoftObjectPtr<UAnimMontage> Montage, FName Section, bool ClientsOnly);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void OnCharacterDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnFlyingUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_IsFlying();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void StopFlying();
};
