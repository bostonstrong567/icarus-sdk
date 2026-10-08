// /Script/Icarus.BTD_CustomTagCooldown
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x90, declared in Icarus/Source/Icarus/AI/BT/BTD_CustomTagCooldown.h

UCLASS()
class UBTD_CustomTagCooldown : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) FGameplayTag CooldownTag;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) FStatsEnum ActionsPerMinuteStat;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) float DefaultCooldownDuration;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) bool bAddToExistingDuration;  // 0x0084, size 0x1
    UPROPERTY(EditAnywhere) bool bActivatesCooldown;  // 0x0085, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    float CooldownDurationValue;  // 0x0088, protected
};
