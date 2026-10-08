// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_EarthSplitter.BTTask_PerformAction_EarthSplitter_C
// Derives from: UBTTask_PerformAction_StrikeAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x274, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_EarthSplitter_C : public UBTTask_PerformAction_StrikeAttack_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SpawnSocket;  // 0x026C, size 0x8

    UFUNCTION(BlueprintCallable) void DoAction();
};
