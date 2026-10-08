// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_EquipmentRequestInventoryContainer.BP_EquipmentRequestInventoryContainer_C
// Derives from: AEquipmentRequestInventoryContainer > AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EquipmentRequestInventoryContainer_C : public AEquipmentRequestInventoryContainer
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
};
