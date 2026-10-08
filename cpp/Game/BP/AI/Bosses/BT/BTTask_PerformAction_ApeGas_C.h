// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_ApeGas.BTTask_PerformAction_ApeGas_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1A4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_ApeGas_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GasLifetime;  // 0x019C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GasModifierLifetime;  // 0x01A0, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION(BlueprintCallable) void RandomOffset(FVector Location, float MinOffset, float MaxOffset, FVector& OffsetOut);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SpawnCloud(FVector Location, AActor* Owner);  // parameters 0x18
};
