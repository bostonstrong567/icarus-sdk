// /Game/BP/AI/Basic/Kea/BP_NPC_CaveBat_Character.BP_NPC_CaveBat_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD00, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_CaveBat_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BatTrail1;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_BatTrail;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* SM_CRE_Bat_DM;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Blood;  // 0x0CE0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsScared;  // 0x0CE8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsScaredKeyName;  // 0x0CEC, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsDiving;  // 0x0CF4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsDivingKeyName;  // 0x0CF8, size 0x8

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_CaveBat_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRotation();
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
