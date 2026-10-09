// /Script/Icarus.BTTask_SetTagCooldownWithDeviation
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x98, declared in Icarus/Source/Icarus/AI/BT/BTTask_SetTagCooldownWithDeviation.h

UCLASS()
class UBTTask_SetTagCooldownWithDeviation : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) FGameplayTag CooldownTag;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) FStatsEnum CooldownStat;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) bool bAddToExistingDuration;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) float CooldownDuration;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) float RandomDeviation;  // 0x0090, size 0x4
    float CooldownDurationValue;  // 0x0094, not reflected
};
