// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Broken_Biological_Containment.BP_Mission_Broken_Biological_Containment_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x37C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Broken_Biological_Containment_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ObjectMesh1;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float SecondsRemaining;  // 0x0378, size 0x4

    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
