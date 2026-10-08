// /Game/BP/AI/Basic/Kea/BP_NPC_Bee_Character.BP_NPC_Bee_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCE0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Bee_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* BeeCollisionSphere;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0CC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Aggression;  // 0x0CD0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastFrameSphereLocation;  // 0x0CD4, size 0xC

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Bee_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
