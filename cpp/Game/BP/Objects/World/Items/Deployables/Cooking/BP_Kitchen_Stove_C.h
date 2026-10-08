// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Kitchen_Stove.BP_Kitchen_Stove_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA80, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Kitchen_Stove_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Soup;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Fish;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Meat;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Veges;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke3;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SaltWater;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FreshWater;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SoftRaw;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke2;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StringRaw;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Kumara;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke1;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Tomato;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Carrot;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Beans;  // 0x0A38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0A40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0A48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_StoveFire_FX3;  // 0x0A50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_StoveFire_FX2;  // 0x0A58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_StoveFire_FX1;  // 0x0A60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_StoveFire_FX;  // 0x0A68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0A70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Audio;  // 0x0A78, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Kitchen_Stove(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateStoveEffects();
};
