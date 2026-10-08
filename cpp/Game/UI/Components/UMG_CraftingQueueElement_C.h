// /Game/UI/Components/UMG_CraftingQueueElement.UMG_CraftingQueueElement_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x304, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CraftingQueueElement_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_130;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Count;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NumberBorder;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_34;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimeText;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelected Selected;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessingItem CachedRecipe;  // 0x02B8, size 0x24
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RecipeToolTip_C* RecipeToolTip;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentTotalCount;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TotalCraftTime;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 QueueElement;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FrontOfQueue;  // 0x02FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SingleCraftTime;  // 0x0300, size 0x4

    UFUNCTION() void BndEvt__Button_130_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CalcCraftTime();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CraftingQueueElement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRecipe(FProcessingItem& Recipe);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void HasValidRecipe(bool& Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Init();
    UFUNCTION(BlueprintCallable) void Selected__DelegateSignature(UUMG_CraftingQueueElement_C* SelectedRecipe);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetNoRecipe();
    UFUNCTION(BlueprintCallable) void SetQueueElement(int32 Number);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StatsChanged();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateCraftTime();
    UFUNCTION(BlueprintCallable) void UpdateRecipe(FProcessingItem ProcessorRecipe);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void UpdateState(bool Selected);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTrigger();
};
