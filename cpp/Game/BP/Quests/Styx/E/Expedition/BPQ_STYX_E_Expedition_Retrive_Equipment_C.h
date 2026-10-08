// /Game/BP/Quests/Styx/E/Expedition/BPQ_STYX_E_Expedition_Retrive_Equipment.BPQ_STYX_E_Expedition_Retrive_Equipment_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_E_Expedition_Retrive_Equipment_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_E_Expedition_Retrive_Equipment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
