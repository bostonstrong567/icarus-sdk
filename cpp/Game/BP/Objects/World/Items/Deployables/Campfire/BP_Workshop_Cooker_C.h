// /Game/BP/Objects/World/Items/Deployables/Campfire/BP_Workshop_Cooker.BP_Workshop_Cooker_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA50, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Workshop_Cooker_C : public ABP_FireProcessorBase_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cooking_Pan;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke2;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot5;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot4;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot3;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot2;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* CampfireFX2;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* CampfireFX3;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* CampfireFX1;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_Fuel;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* CampfireFX;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0A38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0A40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* FireSettingCapsule;  // 0x0A48, size 0x8

    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Workshop_Cooker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCookingPot(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
