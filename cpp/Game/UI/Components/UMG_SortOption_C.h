// /Game/UI/Components/UMG_SortOption.UMG_SortOption_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x271, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SortOption_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInventorySortType> SortType;  // 0x0270, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SortOption(int32 EntryPoint);  // parameters 0x4
};
