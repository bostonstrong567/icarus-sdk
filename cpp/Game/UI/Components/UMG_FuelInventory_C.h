// /Game/UI/Components/UMG_FuelInventory.UMG_FuelInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FuelInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AvailableFuel;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SimpleProgressbar_C* EnergyBar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Fuel;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_FuelTime;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* UMG_Inventory;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissingRequirement_Warning_C* UMG_MissingRequirement_Warning;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor False;  // 0x02A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor True;  // 0x02C8, size 0x28

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FuelInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTransmutationEnergyRemaining();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTransmutationTimeRemaining(FText& Days, FText& Hour, FText& Mins, FText& Secs);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnOutOfFuel();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateFuelTimer();
};
