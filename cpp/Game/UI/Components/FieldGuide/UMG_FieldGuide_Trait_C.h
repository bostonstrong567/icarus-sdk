// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x299, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Trait_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderColour;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryTraitsRowHandle Trait;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Unlocked;  // 0x0298, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Trait(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
