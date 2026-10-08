// /Script/Icarus.Ruleset
// Derives from: UObject
// size 0x48, declared in Icarus/Source/Icarus/Rulesets/Ruleset.h

UCLASS()
class URuleset : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) URulesetSubsystem* RulesetSubsystem;  // 0x0028, size 0x8
    UPROPERTY(BlueprintReadOnly) FRulesetsRowHandle RulesetRowHandle;  // 0x0030, size 0x18

    UFUNCTION(BlueprintImplementableEvent) void ReceiveOnRulesetCreated();

    // Virtual functions that start here:
    //   OnRulesetCreated
};
