// /Game/BP/AI/Bosses/BT/GreatApe/BTT_SetApeAttackType.BTT_SetApeAttackType_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_SetApeAttackType_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector EnumKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeAttackType> NewEnumValue;  // 0x00D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_SetApeAttackType(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
