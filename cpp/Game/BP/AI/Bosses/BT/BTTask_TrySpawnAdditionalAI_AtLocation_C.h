// /Game/BP/AI/Bosses/BT/BTTask_TrySpawnAdditionalAI_AtLocation.BTTask_TrySpawnAdditionalAI_AtLocation_C
// Derives from: UBTTask_TrySpawnAdditionalAI_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1D8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_TrySpawnAdditionalAI_AtLocation_C : public UBTTask_TrySpawnAdditionalAI_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SpawnActorOrLocation;  // 0x01B0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_TrySpawnAdditionalAI_AtLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
