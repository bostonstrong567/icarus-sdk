// /Game/BP/AI/Basic/Kea/BP_NPC_LavaFlyer_Character.BP_NPC_LavaFlyer_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCD8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_LavaFlyer_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IBP_ExplosiveNPCInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyingAudio;  // 0x0CC0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DetonationTimer;  // 0x0CC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetActor;  // 0x0CD0, size 0x8

    UFUNCTION(BlueprintCallable) void AudioOcclusion();
    UFUNCTION(BlueprintCallable) void BeginDetonation(float Duration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_LavaFlyer_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDetonationProgress(float& Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BeginDetonation(float DetonationTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryDetonate();
};
