// /Script/AIModule.BTDecorator_Loop
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Loop.h

UCLASS()
class UBTDecorator_Loop : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) int32 NumLoops;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) bool bInfiniteLoop;  // 0x006C, size 0x1
    UPROPERTY(EditAnywhere) float InfiniteLoopTimeoutTime;  // 0x0070, size 0x4
};
