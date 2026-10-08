// /Game/BP/AI/Bosses/BT/BTTask_IceMammoth_GetClosestLocation.BTTask_IceMammoth_GetClosestLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_IceMammoth_GetClosestLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_MammothLocation> FindLocation;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Ice_Mammoth_Location_Arena_Fallback_C* CachedActor;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedDistance;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CachedReference;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector Location;  // 0x00D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LocationReference;  // 0x00F8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_IceMammoth_GetClosestLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
