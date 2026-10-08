// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Biological_Containment.BP_Mission_Biological_Containment_C
// Derives from: ABP_Faction_Mission_Crate_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x382, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Biological_Containment_C : public ABP_Faction_Mission_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* ActivationMist;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FactionSatellite_FX;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool MistVisualsActive;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DestroyedVisualsActive;  // 0x0381, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Biological_Containment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTICAST_PlayExplostionFX();
    UFUNCTION(BlueprintCallable) void OnRep_DestroyedVisualsActive();
    UFUNCTION(BlueprintCallable) void OnRep_MistVisualsActive();
    UFUNCTION(BlueprintCallable) void SetDestroyedVisuals();
    UFUNCTION(BlueprintCallable) void SetMistVisuals();
};
