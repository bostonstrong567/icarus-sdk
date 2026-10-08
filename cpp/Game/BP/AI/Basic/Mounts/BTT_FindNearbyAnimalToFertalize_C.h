// /Game/BP/AI/Basic/Mounts/BTT_FindNearbyAnimalToFertalize.BTT_FindNearbyAnimalToFertalize_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x104, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyAnimalToFertalize_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0100, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyAnimalToFertalize(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
