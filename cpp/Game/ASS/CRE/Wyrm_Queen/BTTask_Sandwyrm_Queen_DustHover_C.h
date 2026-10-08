// /Game/ASS/CRE/Wyrm_Queen/BTTask_Sandwyrm_Queen_DustHover.BTTask_Sandwyrm_Queen_DustHover_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Sandwyrm_Queen_DustHover_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Sandwyrm_Queen_Character_C* Queen;  // 0x00B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_Sandwyrm_Queen_DustHover(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
