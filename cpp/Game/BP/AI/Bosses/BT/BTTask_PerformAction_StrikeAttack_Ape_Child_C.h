// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_StrikeAttack_Ape_Child.BTTask_PerformAction_StrikeAttack_Ape_Child_C
// Derives from: UBTTask_PerformAction_StrikeAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2D0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_StrikeAttack_Ape_Child_C : public UBTTask_PerformAction_StrikeAttack_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BreakClubNotify;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CarryingLogKey;  // 0x0280, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector NumClubHits;  // 0x02A8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_StrikeAttack_Ape_Child(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMontageNotifyBegin(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
};
