// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Mining_Truck_Storage.BP_Mining_Truck_Storage_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mining_Truck_Storage_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0338, size 0x8
};
