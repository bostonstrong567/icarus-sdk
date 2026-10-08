// /Game/BP/Objects/World/Items/Deployables/Charger/BP_Charging_Device.BP_Charging_Device_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xAB4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Charging_Device_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_MetaPowerbank;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_MetaFlashlight;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Nailgun;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Sand_Backpack;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Laser_Mining;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Laser_Pistol;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Powerbank;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Shield;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_CrossBow;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Bow;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Sledgehammer;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Sickle;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Spear;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Knife;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_PickAxe;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lithium_Axe;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_CaveSpotLight;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Proxy_CaveLight;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Battery_Latern;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Lava_Hunter_Backpack;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Icebox_Backpack;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Battery;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Proxy_Flashlight;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_12;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_11;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_10;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_09;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_08;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_07;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_06;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_05;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_04;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_03;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_02;  // 0x0850, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Powered_Charger_Light_01;  // 0x0858, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights;  // 0x0860, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ChargingAudio;  // 0x0868, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0870, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0878, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnergyPerSecond;  // 0x0880, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DividedFlowRate;  // 0x0884, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Is_Recharging;  // 0x0888, size 0x1, named "Is Recharging"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData RechargingItem;  // 0x0890, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle CachedItemStatic;  // 0x0A80, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Array_Element;  // 0x0A98, size 0x8, named "Array Element"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMeshComponent*> LightMeshes;  // 0x0AA0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 LastLightsOn;  // 0x0AB0, size 0x4

    UFUNCTION(BlueprintCallable) void ActorsRequiringEnergy(int32& NumActors);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Charging_Device(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_Is_Recharging();  // named "OnRep_Is Recharging"
    UFUNCTION(BlueprintCallable) void OnRep_LastLightsOn();
    UFUNCTION(BlueprintCallable) void OnRep_RechargingItem();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RechargeObject();
    UFUNCTION(BlueprintCallable) void Set_Filling_Effects(bool bIsRechargingItems);  // parameters 0x1, named "Set Filling Effects"
    UFUNCTION(BlueprintCallable) void ShouldEnergyFlow(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ShouldEnergyFlowDelayed();
    UFUNCTION(BlueprintCallable) void UpdateLightStatus();
    UFUNCTION(BlueprintCallable) void UpdateLightStatusFromValue(int32 NumLights);  // parameters 0x4
};
