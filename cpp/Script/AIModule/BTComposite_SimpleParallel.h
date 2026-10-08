// /Script/AIModule.BTComposite_SimpleParallel
// Derives from: UBTCompositeNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Composites/BTComposite_SimpleParallel.h

UCLASS()
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBTParallelMode> FinishMode;  // 0x0090, size 0x1
};
