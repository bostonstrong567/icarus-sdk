// /Game/BP/Objects/World/Items/Deployables/Weather/BP_RainReservior.BP_RainReservior_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RainReservior_C : public ABP_DeployableBase_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_Deployable_C* BP_WeatherAudioComponent_Deployable;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsFilledPerUpdate;  // 0x0740, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Array_Index;  // 0x0744, size 0x4, named "Array Index"

    UFUNCTION(BlueprintCallable) void AddIce();
    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_RainReservior(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillContainers();
    UFUNCTION(BlueprintCallable) void InventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
};
