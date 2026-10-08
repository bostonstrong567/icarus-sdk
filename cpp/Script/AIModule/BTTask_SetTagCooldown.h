// /Script/AIModule.BTTask_SetTagCooldown
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x80, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_SetTagCooldown.h

UCLASS()
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) FGameplayTag CooldownTag;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) bool bAddToExistingDuration;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere) float CooldownDuration;  // 0x007C, size 0x4
};
