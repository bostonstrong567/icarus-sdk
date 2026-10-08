// /Game/BP/Objects/World/Items/Deployables/WaterPurifier/BP_Water_Purifier_T1_Ground.BP_Water_Purifier_T1_Ground_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x745, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Purifier_T1_Ground_C : public ABP_DeployableBase_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WaterProxyPlane;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float FillPercent;  // 0x0740, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRainfall;  // 0x0744, size 0x1

    UFUNCTION(BlueprintCallable) void ActivateGenerator();
    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Water_Purifier_T1_Ground(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDynamicDataUpdate();
    UFUNCTION(BlueprintCallable) void OnRep_FillPercent();
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateProxyMeshVisibility();
};
