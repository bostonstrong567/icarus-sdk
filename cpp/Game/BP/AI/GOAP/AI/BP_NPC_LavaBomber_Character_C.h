// /Game/BP/AI/GOAP/AI/BP_NPC_LavaBomber_Character.BP_NPC_LavaBomber_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCD8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_LavaBomber_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IBP_ExplosiveNPCInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Booty;  // 0x0CC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DetonationTimer;  // 0x0CD0, size 0x8

    UFUNCTION(BlueprintCallable) void BeginDetonation(float Duration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Detonate();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_LavaBomber_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GetDetonationProgress(float& Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BeginDetonation(float DetonationTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
