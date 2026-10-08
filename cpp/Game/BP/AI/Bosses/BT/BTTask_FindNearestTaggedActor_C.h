// /Game/BP/AI/Bosses/BT/BTTask_FindNearestTaggedActor.BTTask_FindNearestTaggedActor_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x15C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindNearestTaggedActor_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TagName;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> ActorClassFilter;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToPawn;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FindFurthest;  // 0x0134, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OptionalComponentTag;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OutLocation;  // 0x0140, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequireAlive;  // 0x014C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OutLocationOffset;  // 0x0150, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_FindNearestTaggedActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindActor(APawn* SelfPawn, AActor*& Actor);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
