// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Polymerizer.BP_Polymerizer_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA40, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Polymerizer_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Epoxy;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plastics;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Compounds;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Synthetics;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DFShadow1;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DFShadow;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Polymerizer_Mist;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Natural_Oil_Refiner_Spray1;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Natural_Oil_Refiner_Spray;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioLoop;  // 0x0A20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0A28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesInventory;  // 0x0A30, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* FadingOutCrate;  // 0x0A38, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Polymerizer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_OnCraftedItem(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnBlendOut_F1A6F71B404653A4ABB546B8F6FA9C3A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_F1A6F71B404653A4ABB546B8F6FA9C3A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_F1A6F71B404653A4ABB546B8F6FA9C3A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_F1A6F71B404653A4ABB546B8F6FA9C3A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_F1A6F71B404653A4ABB546B8F6FA9C3A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
