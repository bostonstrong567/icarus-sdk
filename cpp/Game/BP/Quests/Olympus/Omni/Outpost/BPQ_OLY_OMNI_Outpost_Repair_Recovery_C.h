// /Game/BP/Quests/Olympus/Omni/Outpost/BPQ_OLY_OMNI_Outpost_Repair_Recovery.BPQ_OLY_OMNI_Outpost_Repair_Recovery_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_OMNI_Outpost_Repair_Recovery_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_OMNI_Outpost_Repair_Recovery(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
