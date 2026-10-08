// /Script/Icarus.RulesetSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/Subsystems/World/RulesetSubsystem.h

UCLASS()
class URulesetSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(Transient) TMap<FRulesetsRowHandle, URuleset*> Rulesets;  // 0x0050, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    bool bCanAddRulesets;  // 0x0030, private
    TQueue<FRulesetsRowHandle,1> RulesetQueue;  // 0x0040, private

    UFUNCTION(BlueprintCallable) void AddRuleset(const FRulesetsRowHandle& Ruleset);  // parameters 0x18
    UFUNCTION(BlueprintCallable) URuleset* GetRuleset(const FRulesetsRowHandle& RulesetType);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool HasRuleset(const FRulesetsRowHandle& RulesetType);  // parameters 0x19
    UFUNCTION() void WorldStatsReady();
};
