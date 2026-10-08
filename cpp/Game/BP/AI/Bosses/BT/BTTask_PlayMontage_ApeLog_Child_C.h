// /Game/BP/AI/Bosses/BT/BTTask_PlayMontage_ApeLog_Child.BTTask_PlayMontage_ApeLog_Child_C
// Derives from: UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x148, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PlayMontage_ApeLog_Child_C : public UBTTask_PlayMontage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ShowMeshNotify;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RotateMeshNotify;  // 0x0140, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_PlayMontage_ApeLog_Child(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMontageNotifyBegin(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
};
