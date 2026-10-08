// /Game/BP/AI/GOAP/BP_AI_DPSTest.BP_AI_DPSTest_C
// Derives from: UActorComponent > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AI_DPSTest_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DPSTestEnabled;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FirstHit;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumShots;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageTotal;  // 0x00C4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_AI_DPSTest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
