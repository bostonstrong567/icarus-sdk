// /Game/BP/Quests/Olympus/Forest/Research/BPQ_OLY_Forest_Research_Collect_Bioweapon.BPQ_OLY_Forest_Research_Collect_Bioweapon_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Research_Collect_Bioweapon_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Research_Collect_Bioweapon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
