// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Faction_Mission_Prototype_Laser.BP_Faction_Mission_Prototype_Laser_C
// Derives from: ABP_Faction_Mission_Laser_C > ABP_Powered_Faction_Mission_Deployable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Prototype_Laser_C : public ABP_Faction_Mission_Laser_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HeatHaze;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserImpact1;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserBeam1;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LaserSource1;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Burning;  // 0x07B8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserBeams();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UDecalComponent*> GetLaserDecals();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserImpacts();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetLaserSourceLocation(FVector& Location, FVector& ForwardVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnRep_Burning();
    UFUNCTION(BlueprintCallable) void SetPoweredMaterial(bool On);  // parameters 0x1
};
