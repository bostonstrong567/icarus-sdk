// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Object_Research_Geode.BP_Mission_Object_Research_Geode_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x339, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Object_Research_Geode_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Interacted;  // 0x0338, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Object_Research_Geode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeodeInteract();
    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintCallable) void OnRep_Interacted();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
