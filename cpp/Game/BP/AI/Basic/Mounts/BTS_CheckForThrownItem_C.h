// /Game/BP/AI/Basic/Mounts/BTS_CheckForThrownItem.BTS_CheckForThrownItem_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_CheckForThrownItem_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector PlayerKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ThrownItemKey;  // 0x00C8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_CheckForThrownItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
};
