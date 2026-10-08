// /Game/UI/Components/UMG_EnvirosuitSlots.UMG_EnvirosuitSlots_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EnvirosuitSlots_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Food;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* FoodLayout;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FoodProgressText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Oxygen;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* OxygenLayout;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OxygenProgressText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Water;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* WaterLayout;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WaterProgressText;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EquipmentInventory;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WidgetHighlightBase_C* CachedHighlightWidget;  // 0x02C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_EnvirosuitSlots(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory, AIcarusPlayerCharacter* Player);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuickShiftInventoryHandler(int32 Location, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SlotCountChanged(UInventory* Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable, BlueprintPure) FText UpdateFood();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateInventorySlots();
    UFUNCTION(BlueprintCallable, BlueprintPure) FText UpdateOxygen();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText UpdateWater();  // parameters 0x18
};
