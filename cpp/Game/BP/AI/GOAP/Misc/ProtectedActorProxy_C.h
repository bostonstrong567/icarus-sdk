// /Game/BP/AI/GOAP/Misc/ProtectedActorProxy.ProtectedActorProxy_C
// Derives from: AActor > UObject
// size 0x26C, a blueprint class, blueprint

UCLASS(Config=Engine)
class AProtectedActorProxy_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* Protector;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Protectee;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* ProtecteeActorState;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AController*> RecentAttackers;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> RecentAttackTimes;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RecentAttackLifetime;  // 0x0268, size 0x4

    UFUNCTION() void ExecuteUbergraph_ProtectedActorProxy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProtectedActorProxy_ActorDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ProtectedActorProxy_ActorDied(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
