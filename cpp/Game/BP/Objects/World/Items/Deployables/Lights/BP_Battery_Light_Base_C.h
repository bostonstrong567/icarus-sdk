// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Battery_Light_Base.BP_Battery_Light_Base_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Battery_Light_Base_C : public ABP_Light_Electric_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* Extinguish;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bLightIsActive;  // 0x07E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FuelConsumedPer5Sec;  // 0x07EC, size 0x4

    UFUNCTION(BlueprintCallable) void ConsumeFuel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Battery_Light_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOff();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintCallable) void Toggle();
};
