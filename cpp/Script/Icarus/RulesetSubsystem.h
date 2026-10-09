// /Script/Icarus.RulesetSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/Subsystems/World/RulesetSubsystem.h

UCLASS()
class URulesetSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    bool bCanAddRulesets;  // 0x0030, not reflected
    TQueue<FRulesetsRowHandle,1> RulesetQueue;  // 0x0040, not reflected
    UPROPERTY(Transient) TMap<FRulesetsRowHandle, URuleset*> Rulesets;  // 0x0050, size 0x50
public:
    UFUNCTION(BlueprintCallable) void AddRuleset(const FRulesetsRowHandle& Ruleset);  // parameters 0x18
    UFUNCTION(BlueprintCallable) URuleset* GetRuleset(const FRulesetsRowHandle& RulesetType);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool HasRuleset(const FRulesetsRowHandle& RulesetType);  // parameters 0x19
    UFUNCTION() void WorldStatsReady();
};
