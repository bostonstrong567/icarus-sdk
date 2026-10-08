// /Game/UI/HUD/UMG_ResourcePromptDisplay.UMG_ResourcePromptDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourcePromptDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NewAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* UpandFade;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResourceList;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourcePromptInfo> Queue;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourcePromptInfo> TempQueue;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, UUMG_ResourcePrompt_C*> WidgetMap;  // 0x02A0, size 0x50

    UFUNCTION(BlueprintCallable) void AddResource(FItemData Item, int32 Count);  // parameters 0x1F4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ResourcePromptDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResourceRemoved(FName Item);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
