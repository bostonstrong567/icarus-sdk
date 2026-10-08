// /Game/BP/AI/Basic/Mounts/BTTask_ProjectLocation.BTTask_ProjectLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x124, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_ProjectLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector InLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutProjectedLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavigationQueryFilter> Filter_Class;  // 0x0110, size 0x8, named "Filter Class"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Query_Extent;  // 0x0118, size 0xC, named "Query Extent"

    UFUNCTION() void ExecuteUbergraph_BTTask_ProjectLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
