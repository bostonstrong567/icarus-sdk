// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_StoneBrick_Fireplace.BP_StoneBrick_Fireplace_C
// Derives from: ABP_Fireplace_C > ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA98, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StoneBrick_Fireplace_C : public ABP_Fireplace_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cooked_Bacon;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cooked_Fish;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cooked_Soup;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cooked_Meat;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Fish;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Soup;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Veges;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Meat;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meat1;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meat2;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat1;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meat3;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat;  // 0x0A38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot2;  // 0x0A40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat2;  // 0x0A48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot5;  // 0x0A50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot4;  // 0x0A58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot3;  // 0x0A60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Water;  // 0x0A68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat3;  // 0x0A70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Bounce;  // 0x0A78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x0A80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0A88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Fireplace_FX;  // 0x0A90, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_StoneBrick_Fireplace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
