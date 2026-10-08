// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_RegenerateHealth_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RegenPercent;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* CharacterRef;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToRegenerate;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAIController* ControllerRef;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRegenerating;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FractionalRegen;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TargetHealthAmount;  // 0x00D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_RegenerateHealth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RegenerateHealth(float DeltaSeconds);  // parameters 0x4
};
