// /Script/Icarus.IcarusHUD
// Derives from: AHUD > AActor > UObject
// size 0x3C0, declared in Icarus/Source/Icarus/UI/IcarusHUD.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AIcarusHUD : public AHUD
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    TMap<TWeakObjectPtr<UInventory,FWeakObjectPtr>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInventory,FWeakObjectPtr>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0> > PendingInventorySlotUpdates;  // 0x0310, not reflected
    TMap<TWeakObjectPtr<UInventory,FWeakObjectPtr>,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInventory,FWeakObjectPtr>,TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,0> > SlotChangeListeners;  // 0x0360, not reflected
    UPROPERTY(EditAnywhere, Instanced) UItemTooltipBase* ItemTooltipWidget;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UItemTooltipBase> ItemTooltipWidgetClass;  // 0x03B8, size 0x8
public:
    UFUNCTION() void InventoryUpdated(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RegisterInventoryChangeListener(UObject* Listener, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetBiomeWeatherData(const TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast>& BiomeGroupForecast);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ToggleDrawWeather();
    UFUNCTION(BlueprintCallable) void UnregisterInventoryChangeListener(UObject* Listener, UInventory* Inventory);  // parameters 0x10
};
