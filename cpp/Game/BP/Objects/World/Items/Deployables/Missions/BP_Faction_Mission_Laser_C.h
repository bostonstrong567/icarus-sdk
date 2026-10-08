// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Faction_Mission_Laser.BP_Faction_Mission_Laser_C
// Derives from: ABP_Powered_Faction_Mission_Deployable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Laser_C : public ABP_Powered_Faction_Mission_Deployable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserBeam;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LaserImpact;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LaserSource;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DestructionAudio;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LaserAudio;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool LaserActive;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Target;  // 0x0788, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Laser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserBeams();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UDecalComponent*> GetLaserDecals();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNiagaraComponent*> GetLaserImpacts();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetLaserSourceLocation(FVector& Location, FVector& ForwardVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetObjectTypes(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDeviceFullyPowered();
    UFUNCTION(BlueprintCallable) void OnDeviceNotFullyPowered();
    UFUNCTION(BlueprintCallable) void OnHighlightChaned(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_LaserActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetPoweredMaterial(bool On);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TraceForImpactLocation(bool& Found, FVector& End_Location);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateLaserState();
};
