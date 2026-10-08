// /Game/Assets/2DArt/UI/FieldGuide/Widgets/UMG_BestiaryRewards.UMG_BestiaryRewards_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryRewards_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Stat2CornersAnim;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Stat1CornersAnim;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WeaknessCornerAnim;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LootCornerAnim;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Loot;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Stat_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Stat_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Weakness;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* LootGrid;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LootTableBorder;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LootText;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Stat1Corners;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Stat2Corners;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Stats1Border;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats1Table;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Stats2Border;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats2Table;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TraitsBorder;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TraitsDetails;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* TraitsTable;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TraitsText;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WeaknessCorners;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TraitsColour;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Brush_Colour;  // 0x0348, size 0x28, named "Text Brush Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor EnabledBrushColor;  // 0x0370, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LockedBrushColor;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TraitsUnlock;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUnlock1;  // 0x0394, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LootUnlock;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUnlock2;  // 0x039C, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_BestiaryRewards(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Highlight(bool Weakness, bool Stat1, bool Loot, bool Stat2);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(FBestiaryDataRowHandle Group, int32 Percent);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBorderColors(int32 Percent);  // parameters 0x4
};
