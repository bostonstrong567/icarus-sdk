// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Fish_Stat_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Unit;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Value;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ValueText;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DescriptionText;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText UnitText;  // 0x02C0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Fish_Stat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateValue(FText Text);  // parameters 0x18
};
