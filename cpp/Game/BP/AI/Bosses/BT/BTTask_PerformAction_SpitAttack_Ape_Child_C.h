// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_SpitAttack_Ape_Child.BTTask_PerformAction_SpitAttack_Ape_Child_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2B9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_SpitAttack_Ape_Child_C : public UBTTask_PerformAction_SpitAttack_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ShowMeshNotify;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HideMeshNotify;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRock;  // 0x02B8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_SpitAttack_Ape_Child(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMontageNotifyBegin(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
};
