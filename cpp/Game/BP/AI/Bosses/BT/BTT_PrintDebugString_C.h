// /Game/BP/AI/Bosses/BT/BTT_PrintDebugString.BTT_PrintDebugString_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xCC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_PrintDebugString_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DebugString;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBPLogVerbosity Verbosity;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LogCategory;  // 0x00C4, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_PrintDebugString(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
