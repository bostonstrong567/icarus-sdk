// /Game/UI/Windows/UMG_BeehiveBreeding.UMG_BeehiveBreeding_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BeehiveBreeding_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BenchName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_178;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourcesPerMin_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BeehiveUpgradeLock_C* UMG_BeehiveUpgradeLock;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExtractionElement_C* UMG_ExtractionElement;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemWithBackgroundImage_C* UMG_InventoryItemWithBackgroundImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Upgrade;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BeehiveBreeding(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateTick(float Progress);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateUpgrades(bool Active);  // parameters 0x1
};
