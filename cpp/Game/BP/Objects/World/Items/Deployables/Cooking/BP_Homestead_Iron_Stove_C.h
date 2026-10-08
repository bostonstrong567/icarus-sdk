// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Homestead_Iron_Stove.BP_Homestead_Iron_Stove_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA28, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Homestead_Iron_Stove_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Soup;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Not_Soup;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke1;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot3;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot2;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot5;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot4;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Potbelly_Smoke;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Effects;  // 0x0A20, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Homestead_Iron_Stove(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnFuelItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
