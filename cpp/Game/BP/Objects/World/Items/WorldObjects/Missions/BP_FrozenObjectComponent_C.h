// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_FrozenObjectComponent.BP_FrozenObjectComponent_C
// Derives from: UActorComponent > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FrozenObjectComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Percent;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Open;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFrozenStateUpdated FrozenStateUpdated;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* FrozenMaterial;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialParameterCollection* Collection;  // 0x00E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FrozenObjectComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FrozenStateUpdated__DelegateSignature(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) UStaticMeshComponent* GetFrozenMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* GetFrozenScaleComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UNiagaraComponent* GetParticleComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitFrozenMesh();
    UFUNCTION(BlueprintCallable) void OnRep_Open();
    UFUNCTION(BlueprintCallable) void OnRep_Percent();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ToggleParticles(bool On);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateFrozen();
};
