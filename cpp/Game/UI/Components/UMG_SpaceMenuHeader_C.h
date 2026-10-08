// /Game/UI/Components/UMG_SpaceMenuHeader.UMG_SpaceMenuHeader_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpaceMenuHeader_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SeperatorImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Text;  // 0x0278, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_SpaceMenuHeader(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
