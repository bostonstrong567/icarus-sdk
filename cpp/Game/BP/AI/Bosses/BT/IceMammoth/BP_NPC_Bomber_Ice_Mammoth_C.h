// /Game/BP/AI/Bosses/BT/IceMammoth/BP_NPC_Bomber_Ice_Mammoth.BP_NPC_Bomber_Ice_Mammoth_C
// Derives from: ABP_NPC_CaveBat_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD20, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Bomber_Ice_Mammoth_C : public ABP_NPC_CaveBat_Character_C, public IBP_ExplosiveNPCInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyingAudio;  // 0x0D08, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DetonationTimer;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetActor;  // 0x0D18, size 0x8

    UFUNCTION(BlueprintCallable) void BeginDetonation(float Duration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Bomber_Ice_Mammoth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDetonationProgress(float& Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BeginDetonation(float DetonationTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryDetonate();
};
