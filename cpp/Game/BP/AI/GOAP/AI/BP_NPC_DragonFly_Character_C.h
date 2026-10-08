// /Game/BP/AI/GOAP/AI/BP_NPC_DragonFly_Character.BP_NPC_DragonFly_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF2, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_DragonFly_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DragonflyWings;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TargetRotator;  // 0x0CDC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsDivingKeyName;  // 0x0CE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDiving;  // 0x0CF0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEmerged;  // 0x0CF1, size 0x1

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Dragonfly_FlyingAudio();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_DragonFly_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRotation();
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
