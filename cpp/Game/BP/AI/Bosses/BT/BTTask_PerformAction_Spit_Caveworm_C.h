// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_Spit_Caveworm.BTTask_PerformAction_Spit_Caveworm_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1C8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_Spit_Caveworm_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentTargetKey;  // 0x019C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileSpeed;  // 0x01A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpitballCount;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpitballInaccuracy;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle SpitballItemData;  // 0x01B0, size 0x18

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpitballScale(FVector& OutScale);  // parameters 0xC
};
