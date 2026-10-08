// /Game/UI/InWorld/UMG_InWorld_Manufacturer.UMG_InWorld_Manufacturer_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InWorld_Manufacturer_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CraftingOverlay;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_98;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SingleCraftTime;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessingItem CachedRecipe;  // 0x02DC, size 0x24

    UFUNCTION(BlueprintCallable) void CalculateCraftTIme();
    UFUNCTION() void ExecuteUbergraph_UMG_InWorld_Manufacturer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ProcessingItemUpdated(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void Update();
};
