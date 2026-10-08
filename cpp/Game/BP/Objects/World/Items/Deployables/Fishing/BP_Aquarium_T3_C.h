// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Aquarium_T3.BP_Aquarium_T3_C
// Derives from: ABP_Aquarium_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x868, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Aquarium_T3_C : public ABP_Aquarium_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0840, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x0848, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0850, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsGeneratorRunning;  // 0x0858, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x0860, size 0x8

    UFUNCTION(BlueprintCallable) void CalculateIsDeviceRunning(bool& IsRunning);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Aquarium_T3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void TryActivateGenerator();
};
