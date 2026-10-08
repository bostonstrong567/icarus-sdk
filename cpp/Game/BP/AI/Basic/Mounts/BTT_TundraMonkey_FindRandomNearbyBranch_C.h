// /Game/BP/AI/Basic/Mounts/BTT_TundraMonkey_FindRandomNearbyBranch.BTT_TundraMonkey_FindRandomNearbyBranch_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_TundraMonkey_FindRandomNearbyBranch_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00B8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_TundraMonkey_FindRandomNearbyBranch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector FindLocation(AActor* Target, bool& Success);  // parameters 0x15
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
