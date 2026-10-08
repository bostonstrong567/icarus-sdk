// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_ELY3_Blocker.BP_Mission_ELY3_Blocker_C
// Derives from: ABP_Destructible_Blocker_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x380, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_ELY3_Blocker_C : public ABP_Destructible_Blocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_ELY3_Blocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerDestroy();
    UFUNCTION(BlueprintCallable) void UpdateDestroyed();
};
