// /Game/BP/AI/Bosses/BT/BTTask_ScorpionBoss_ReturnToArenaLocation.BTTask_ScorpionBoss_ReturnToArenaLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_ScorpionBoss_ReturnToArenaLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaLocationKey;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaRadiusKey;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArenaLocation;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArenaRadius;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZOffset;  // 0x00D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_ScorpionBoss_ReturnToArenaLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnQueryComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
