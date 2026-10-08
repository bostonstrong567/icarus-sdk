// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Orbital_Lazer.BP_Mission_Orbital_Lazer_C
// Derives from: ABigBoom_C > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Orbital_Lazer_C : public ABigBoom_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float TotalDuration;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ExplosionRadius;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DestroyDeployableInv;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float CachedSphereRadius;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Open_World;  // 0x0310, size 0x1, named "Is Open World"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ActorsToIgnore;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CleanupAfterDelay;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FActorDamaged ActorDamaged;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageDurationInSeconds;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusLargeScaleDestroyComponent* LargeScaleDestruction;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OverrideDamageToDestroyRatio;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MagicNumberDelay;  // 0x0354, size 0x4

    UFUNCTION(BlueprintCallable) void ActorDamaged__DelegateSignature(AActor* DamagedActor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Orbital_Lazer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorDamaged(AActor* DamagedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
