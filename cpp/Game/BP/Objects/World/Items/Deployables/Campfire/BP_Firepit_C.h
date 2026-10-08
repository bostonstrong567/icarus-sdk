// /Game/BP/Objects/World/Items/Deployables/Campfire/BP_Firepit.BP_Firepit_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA40, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Firepit_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* NavBlockingBox;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Firepit_FX;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bloom_1;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bloom_3;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bloom_2;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_FirePit_Firewood_Proxy;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Camfire_CookingMeat;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RawMeat;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CookedMeats;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* FireSettingCapsule;  // 0x0A38, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Firepit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnThermalComponentActivated(UActorComponent* Component, bool bReset);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnThermalComponentDeactivated(UActorComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
