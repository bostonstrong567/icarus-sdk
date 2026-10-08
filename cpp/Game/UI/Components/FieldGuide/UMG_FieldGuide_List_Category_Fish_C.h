// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C
// Derives from: UUMG_FieldGuide_List_Category_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Category_Fish_C : public UUMG_FieldGuide_List_Category_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishRarity Rarity;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishType Type;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterFish FilterFish;  // 0x02C8, size 0x10

    UFUNCTION(BlueprintCallable) void ClickedInternal();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterFish__DelegateSignature(EFishRarity Rarity, EFishType Type);  // parameters 0x2
};
