// /Game/Assets/2DArt/UI/FieldGuide/Widgets/UMG_BestiaryLore.UMG_BestiaryLore_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryLore_C : public UUserWidget
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Lore3Animation;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Lore2Animation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Lore1Animation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* Lock_Lore3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lore1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lore2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Lore3;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintCallable) void Highlight(bool Lore1, bool Lore2, bool Lore3);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void Initialise(FText LoreText1, FText LoreText2, FText LoreText3, bool Lock1, bool Lock2, bool Lock3);  // parameters 0x4B
};
