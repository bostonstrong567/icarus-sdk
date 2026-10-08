// /Game/UI/Hab/CharacterCreation/UMG_ColorSegment.UMG_ColorSegment_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ColorSegment_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ColorIcon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Colour;  // 0x0270, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_ColorSegment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
