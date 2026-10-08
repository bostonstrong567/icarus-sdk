// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Console.BP_Mission_Console_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Console_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0320, size 0x8
};
