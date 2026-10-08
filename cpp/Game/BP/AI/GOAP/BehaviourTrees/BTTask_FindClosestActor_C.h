// /Game/BP/AI/GOAP/BehaviourTrees/BTTask_FindClosestActor.BTTask_FindClosestActor_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindClosestActor_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorType;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFoundActor;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ClosestActor;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BlackboardName;  // 0x00C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_FindClosestActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
