// /Game/BP/AI/Bosses/BT/IceMammoth/BTD_CheckHealthThreshold.BTD_CheckHealthThreshold_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckHealthThreshold_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirstThresholdHit;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SecondThresholdHit;  // 0x00A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FirstThreshold;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondThreshold;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector RegenArmorKey;  // 0x00B8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTD_CheckHealthThreshold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
