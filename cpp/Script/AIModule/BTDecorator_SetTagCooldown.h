// /Script/AIModule.BTDecorator_SetTagCooldown
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h

UCLASS()
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) FGameplayTag CooldownTag;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) float CooldownDuration;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) bool bAddToExistingDuration;  // 0x0074, size 0x1
};
