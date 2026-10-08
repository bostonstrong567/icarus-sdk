// /Script/AIModule.BTTask_FinishWithResult
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h

UCLASS()
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBTNodeResult> Result;  // 0x0070, size 0x1
};
