// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Tags.UMG_FieldGuide_Tags_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Tags_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderColour;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BorderBrushColour;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextBrushColour;  // 0x02A0, size 0x28

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Tags(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
