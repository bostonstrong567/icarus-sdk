// /Game/UI/UMG_Credits_Section.UMG_Credits_Section_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Credits_Section_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LargeSections;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NameCredits;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SubSections;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Sub_Title;  // 0x0298, size 0x18, named "Sub Title"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Credits;  // 0x02B0, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Credits_Section(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
