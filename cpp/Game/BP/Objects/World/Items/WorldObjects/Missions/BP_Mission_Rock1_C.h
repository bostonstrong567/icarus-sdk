// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Rock1.BP_Mission_Rock1_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Rock1_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0330, size 0x8

    UFUNCTION(BlueprintCallable) void Set_State(bool Interacted);  // parameters 0x1, named "Set State"
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
