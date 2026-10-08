// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Mammoth_Corpse.BP_Mission_Mammoth_Corpse_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Mammoth_Corpse_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0358, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Mammoth_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InventoryCheck();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
