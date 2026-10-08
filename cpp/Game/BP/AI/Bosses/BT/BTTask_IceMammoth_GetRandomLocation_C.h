// /Game/BP/AI/Bosses/BT/BTTask_IceMammoth_GetRandomLocation.BTTask_IceMammoth_GetRandomLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_IceMammoth_GetRandomLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_MammothLocation> FindLocation;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Ice_Mammoth_Location_Arena_Fallback_C*> ValidActors;  // 0x00B8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BTTask_IceMammoth_GetRandomLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
