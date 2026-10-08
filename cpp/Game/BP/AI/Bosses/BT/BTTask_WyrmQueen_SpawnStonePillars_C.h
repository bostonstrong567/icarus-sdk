// /Game/BP/AI/Bosses/BT/BTTask_WyrmQueen_SpawnStonePillars.BTTask_WyrmQueen_SpawnStonePillars_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_WyrmQueen_SpawnStonePillars_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PillarsToSpawn;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Sandwyrm_Queen_Character_C* Queen;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StepDistance;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector QueenLocation;  // 0x00D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomX;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomY;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PillarOffset;  // 0x00E4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_WyrmQueen_SpawnStonePillars(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
