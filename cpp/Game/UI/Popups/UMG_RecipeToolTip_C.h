// /Game/UI/Popups/UMG_RecipeToolTip.UMG_RecipeToolTip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x540, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeToolTip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Elements;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FishInputText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Variations;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* OutputBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PossibleOutputs;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PromptText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_395;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_216;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* UMG_IcarusGrid;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats_C_3;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ValidItemAttachments_C* UMG_ValidItemAttachments;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ValidMounts_C* UMG_ValidMounts;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VariationText;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessingItem Recipe;  // 0x0310, size 0x24
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateStateRecipe;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowOutput;  // 0x0341, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CraftingActor;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ClientRequestAlterationsItem;  // 0x0350, size 0x1F0

    UFUNCTION(BlueprintCallable) void ClientRequestAlterationData(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeToolTip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FullUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAlterationPreview(FItemData Item, TArray<FAlterationsEnum>& CraftedAlterations);  // parameters 0x200
    UFUNCTION(BlueprintCallable) bool HasFishInput();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnClientRequestAlterationDataResponse(const TArray<FItemResourceGeneratedAlterationResult>& Results);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnVisibilityUpdated(ESlateVisibility InVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateTrigger();
};
