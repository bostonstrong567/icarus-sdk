// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_GlassworkingBench_V2.BP_GlassworkingBench_V2_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GlassworkingBench_V2_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Audio;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bounce;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Stick;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output3;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output2;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Output1;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_GlassWorking_v2_Proxy_Input1;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_GlassworkingBench_V2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnProcessingItemUpdated(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects();
    UFUNCTION(BlueprintCallable) void UpdateWaterFlow(FProcessorRecipesRowHandle CurrentRecipe);  // parameters 0x18
};
