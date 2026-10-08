// /Game/BP/AI/Bosses/BT/BTTask_PlayMontage_SetBlackboardValue.BTTask_PlayMontage_SetBlackboardValue_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1C9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PlayMontage_SetBlackboardValue_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector DesiredBlackboardKey;  // 0x01A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DesirecBlackboardValue;  // 0x01C8, size 0x1

    UFUNCTION(BlueprintCallable) void DoAction();
};
