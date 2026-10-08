// /Game/BP/Quests/Styx/D/Research2/BPQ_STYX_D_Research2_Collect_Bomb.BPQ_STYX_D_Research2_Collect_Bomb_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Research2_Collect_Bomb_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Research2_Collect_Bomb(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
