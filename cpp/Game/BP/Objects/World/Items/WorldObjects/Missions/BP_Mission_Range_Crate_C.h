// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Range_Crate.BP_Mission_Range_Crate_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Range_Crate_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0368, size 0x8
};
