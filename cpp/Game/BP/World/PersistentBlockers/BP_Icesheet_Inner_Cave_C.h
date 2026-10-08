// /Game/BP/World/PersistentBlockers/BP_Icesheet_Inner_Cave.BP_Icesheet_Inner_Cave_C
// Derives from: ABP_Destructible_Blocker_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x380, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Icesheet_Inner_Cave_C : public ABP_Destructible_Blocker_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0378, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateBlockerState();
};
