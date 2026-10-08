// /Script/Icarus.BTT_ExecuteFunction
// Derives from: UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, declared in Icarus/Source/Icarus/AI/BT/BTT_ExecuteFunction.h

UCLASS()
class UBTT_ExecuteFunction : public UBTTask_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere) FFunctionContext FunctionContext;  // 0x0098, size 0x18
    UPROPERTY(EditAnywhere) FBlackboardKeySelector Target;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere) bool bReturnSuccessIfInvalid;  // 0x00D8, size 0x1
};
