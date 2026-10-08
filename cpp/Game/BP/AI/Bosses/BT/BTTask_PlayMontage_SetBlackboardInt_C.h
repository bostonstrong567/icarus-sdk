// /Game/BP/AI/Bosses/BT/BTTask_PlayMontage_SetBlackboardInt.BTTask_PlayMontage_SetBlackboardInt_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1CD, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PlayMontage_SetBlackboardInt_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector DesiredBlackboardKey;  // 0x01A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredBlackboardValue;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddValue;  // 0x01CC, size 0x1

    UFUNCTION(BlueprintCallable) void DoAction();
};
