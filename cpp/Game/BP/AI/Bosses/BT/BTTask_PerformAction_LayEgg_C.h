// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_LayEgg.BTTask_PerformAction_LayEgg_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1F0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_LayEgg_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SpawnSocket;  // 0x019C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x01A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AILevel;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToHatch;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToHatch_RandomDeviation;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABP_LavaHunterEgg_C> EggClass;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberToSpawn;  // 0x01D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberToSpawnDeviation;  // 0x01D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHealth;  // 0x01D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum SpawnCountScalingRule;  // 0x01E0, size 0x10

    UFUNCTION(BlueprintCallable) void DoAction();
};
