// /Game/BP/Behaviours/Actionable/Scanner/W_FishEntryGrid.W_FishEntryGrid_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_FishEntryGrid_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FishImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Percent;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataEnum Fish;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentValue;  // 0x0288, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_FishEntryGrid(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
