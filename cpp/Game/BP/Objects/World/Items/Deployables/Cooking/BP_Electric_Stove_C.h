// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Electric_Stove.BP_Electric_Stove_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA88, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Electric_Stove_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Soup;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Fish;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Meat;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Any_Cooked_Veges;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat3;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat2;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat1;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Cooking_SteamHeat;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder4;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder3;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder2;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder1;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Mesh;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight5;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight4;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight3;  // 0x0A30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight2;  // 0x0A38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0A40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0A48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Meat3;  // 0x0A50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot5;  // 0x0A58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot4;  // 0x0A60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot3;  // 0x0A68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CookingPot2;  // 0x0A70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Water;  // 0x0A78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Audio;  // 0x0A80, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Electric_Stove(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
