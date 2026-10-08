// /Game/BP/AI/Basic/Kea/BTT_SetMovementMode.BTT_SetMovementMode_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB2, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_SetMovementMode_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> New_Movement_Mode;  // 0x00B0, size 0x1, named "New Movement Mode"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 New_Custom_Mode;  // 0x00B1, size 0x1, named "New Custom Mode"

    UFUNCTION() void ExecuteUbergraph_BTT_SetMovementMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
