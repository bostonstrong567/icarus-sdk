// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Mining_Truck.BP_Mining_Truck_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mining_Truck_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Storage;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Fuel;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Water;  // 0x0350, size 0x8
};
