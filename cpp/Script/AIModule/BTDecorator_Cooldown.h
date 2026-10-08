// /Script/AIModule.BTDecorator_Cooldown
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Cooldown.h

UCLASS()
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) float CoolDownTime;  // 0x0068, size 0x4
};
