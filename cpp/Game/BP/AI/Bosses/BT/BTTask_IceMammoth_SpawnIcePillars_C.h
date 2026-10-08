// /Game/BP/AI/Bosses/BT/BTTask_IceMammoth_SpawnIcePillars.BTTask_IceMammoth_SpawnIcePillars_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_IceMammoth_SpawnIcePillars_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* EQS;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PillarsPerPerson;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CaveEnterance;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxPillars;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PillarsToDestroy;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Ice_MammothBoss_Character_C* IMBoss;  // 0x00D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_IceMammoth_SpawnIcePillars(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
