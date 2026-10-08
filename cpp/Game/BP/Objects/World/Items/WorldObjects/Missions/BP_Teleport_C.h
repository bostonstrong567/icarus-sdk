// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Teleport.BP_Teleport_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Teleport_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ExitLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 ID;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 TargetID;  // 0x0344, size 0x4

    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
