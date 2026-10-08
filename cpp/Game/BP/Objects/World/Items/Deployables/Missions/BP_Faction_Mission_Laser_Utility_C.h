// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Faction_Mission_Laser_Utility.BP_Faction_Mission_Laser_Utility_C
// Derives from: ABP_Faction_Mission_Laser_C > ABP_Powered_Faction_Mission_Deployable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Laser_Utility_C : public ABP_Faction_Mission_Laser_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HeatHaze;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserImpact1;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserBeam1;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LaserSource1;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Burning;  // 0x07C8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Laser_Utility(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserBeams();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UDecalComponent*> GetLaserDecals();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserImpacts();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetLaserSourceLocation(FVector& Location, FVector& ForwardVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetObjectTypes(TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);  // parameters 0x10
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceFullyPowered();
    UFUNCTION(BlueprintCallable) void OnRep_Burning();
    UFUNCTION(BlueprintCallable) void OnTakeAnyDamage_Event_0(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetPoweredMaterial(bool On);  // parameters 0x1
};
