// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_SecurityDoor_ELY3.BP_SecurityDoor_ELY3_C
// Derives from: ABP_SecurityDoor_Placed_C > ABP_SecurityDoor_C > ABP_LockedDoor_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SecurityDoor_ELY3_C : public ABP_SecurityDoor_Placed_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DoorFrame1;  // 0x03A0, size 0x8
};
